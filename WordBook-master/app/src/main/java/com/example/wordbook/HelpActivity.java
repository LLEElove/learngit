package com.example.wordbook;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

import org.litepal.crud.DataSupport;

public class HelpActivity extends AppCompatActivity {

    Button ret;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        setContentView(R.layout.activity_help);

        ret=findViewById(R.id.ret);
        ret.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent intent_return = new Intent();
                intent_return.putExtra("id", DataSupport.findLast(Data1.class).id);
                setResult(RESULT_OK,intent_return);
                finish();

            }


    });

    }
}