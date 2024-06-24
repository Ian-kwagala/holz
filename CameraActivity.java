import android.app.Activity;
import android.content.Intent;
import android.graphics.Bitmap;
import android.os.Bundle;
import android.provider.MediaStore;
import android.view.View;
import android.widget.Button;
import android.widget.ImageView;

public class CameraActivity extends Activity {

    private static final int CAMERA_REQUEST = 1888;
    private ImageView imageView;

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_camera);

        imageView = (ImageView) findViewById(R.id.image_view);
        Button takePhotoButton = (Button) findViewById(R.id.take_photo_button);

        takePhotoButton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View view) {
                Intent cameraIntent = new Intent(MediaStore.ACTION_IMAGE_CAPTURE);
                startActivityForResult(cameraIntent, CAMERA_REQUEST);
            }
        });
    }

    @Override
    protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        if (requestCode == CAMERA_REQUEST && resultCode == Activity.RESULT_OK) {
            Bitmap photo = (Bitmap) data.getExtras().get("data");
            imageView.setImageBitmap(photo);
        }
    }
}


/*
This code assumes you have an ImageView and a Button in your layout file (activity_camera.xml). When the button is clicked, it starts the camera app using the MediaStore.ACTION_IMAGE_CAPTURE intent. When the photo is taken, it is returned to the onActivityResult method, where it is displayed in the ImageView.

Please note that this code does not delete the photo. If you want to delete the photo after it has been taken, you will need to add additional code to do so. Also, this code does not save the photo to the device's storage. If you want to save the photo, you will need to add additional code to do so.

Remember to add the necessary permissions to your AndroidManifest.xml file:


<uses-permission android:name="android.permission.CAMERA" />


I hope this helps! Let me know if you have any questions.
*/