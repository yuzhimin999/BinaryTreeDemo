package com.zm.binarytreedemo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {
    private static final String TAG = "binarytreedemo";
    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method

         TextView tv = (TextView) findViewById(R.id.sample_text);
         tv.setText(stringFromJNI());
         //uninstallListenerJNI();

         int i = intFromJNI();
        Log.e(TAG,"i = " +i);
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();
    public native int intFromJNI();
    //public native void uninstallListenerJNI();
}
