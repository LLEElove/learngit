package com.example.myweather.db;

import org.litepal.crud.LitePalSupport;

public class County extends LitePalSupport {
    int id;
    private String countyName;
    private String countyAdcode;
    private int cityId;

    public int getCityId() {
        return cityId;
    }

    public void setCityId(int cityId) {
        this.cityId = cityId;
    }


    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getCountyName() {
        return countyName;
    }

    public void setCountyName(String countyName) {
        this.countyName = countyName;
    }

    public String getCountyAdcode() {
        return countyAdcode;
    }

    public void setCountyAdcode(String countyAdcode) {
        this.countyAdcode = countyAdcode;
    }
}
