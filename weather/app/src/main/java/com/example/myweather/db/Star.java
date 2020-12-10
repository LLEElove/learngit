package com.example.myweather.db;

import org.litepal.crud.LitePalSupport;

public class Star extends LitePalSupport {
    int id;
    private String Name;
    private String Adcode;

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return Name;
    }

    public void setName(String name) {
        Name = name;
    }

    public String getAdcode() {
        return Adcode;
    }

    public void setAdcode(String adcode) {
        Adcode = adcode;
    }
}
