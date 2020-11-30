package com.example.wordbook;

import org.litepal.crud.DataSupport;

public class Data1 extends DataSupport {
    int id;
    String name;
    String zuozhe;
    String nr;

    public Data1(){
        super();
    }

    public Data1(String name, String zuozhe, String nr){
        this.name = name;
        this.zuozhe = zuozhe;
        this.nr = nr;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getzuozhe() {
        return zuozhe;
    }

    public void setzuozhe(String zuozhe) {
        this.zuozhe = zuozhe;
    }

    public String getnr() {
        return nr;
    }

    public void setnr(String nr) {
        this.nr = nr;
    }
}
