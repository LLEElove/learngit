package com.example.myweather.db;

import org.litepal.crud.LitePalSupport;

//DataSupport已经被弃用了，用LitePalSupport来代替
public class Province extends LitePalSupport {
    int id;
    private String provinceName;
    private String provinceAdcode;

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getProvinceAdcode() {
        return provinceAdcode;
    }

    public void setProvinceAdcode(String provinceAdcode) {
        this.provinceAdcode = provinceAdcode;
    }

    public String getProvinceName() {
        return provinceName;
    }

    public void setProvinceName(String provinceName) {
        this.provinceName = provinceName;
    }
}
