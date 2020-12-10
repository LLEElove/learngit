package com.example.myweather.db;

import org.litepal.crud.LitePalSupport;

public class City extends LitePalSupport {
    int id;
    private String cityName;
    private String cityAdcode;
    private int provinceId;

    public int getProvinceId() {
        return provinceId;
    }

    public void setProvinceId(int provinceId) {
        this.provinceId = provinceId;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getCityName() {
        return cityName;
    }

    public void setCityName(String cityName) {
        this.cityName = cityName;
    }

    public String getCityAdcode() {
        return cityAdcode;
    }

    public void setCityAdcode(String cityAdcode) {
        this.cityAdcode = cityAdcode;
    }
}
