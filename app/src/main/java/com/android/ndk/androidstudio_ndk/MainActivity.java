package com.android.ndk.androidstudio_ndk;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    private static final String TAG = "NDK::Activity";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        TextView tv = new TextView(this);
        String str = stringFromJNI();
        tv.setText(str);
        setContentView(tv);

        Log.i(TAG, "call stringFromJNI(), return string: " + str);
    }

    public native String stringFromJNI();

    static {
        System.loadLibrary("myjni");
    }
}
