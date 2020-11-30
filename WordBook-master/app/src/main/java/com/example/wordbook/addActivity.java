package com.example.wordbook;

import android.content.Intent;
import android.graphics.Color;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import org.litepal.crud.DataSupport;

import java.text.SimpleDateFormat;
import java.util.Calendar;

import cc.shinichi.library.tool.utility.ui.ToastUtil;

public class addActivity extends AppCompatActivity {

    EditText editText1;//输入
    EditText editText2;//输入
    EditText editText3;//输入

    Button add;//添加按钮

    String name="";//标题
    String zuozhe = "";//作者
    String nr="";//内容
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_add);
        add=findViewById(R.id.add);//找到add按钮
        editText1=findViewById(R.id.editView1);//找到text
        editText2=findViewById(R.id.editView2);
        editText3=findViewById(R.id.editView3);
        add.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                name=editText1.getText().toString();
                zuozhe=editText2.getText().toString();
                nr=editText3.getText().toString();
                if (!name.equals("")&&!zuozhe.equals("")&&!nr.equals("")){
                    Intent intent_return = new Intent();
                    new Data1(name,zuozhe,nr).save();
                    intent_return.putExtra("name",name);//传递数据
                    intent_return.putExtra("zuozhe",zuozhe);
                    intent_return.putExtra("nr",nr);
                    intent_return.putExtra("id",DataSupport.findLast(Data1.class).id);
                    setResult(RESULT_OK,intent_return);
                    finish();
                }else {
                    ToastUtil.getInstance()._short(addActivity.this,"请输入完整数据");
                }
            }
        });
    }

}
