//
//  ViewController.h
//  aj1
//
//  Created by anjun on 14-7-12.
//  Copyright (c) 2014年 anjun. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <Foundation/Foundation.h>
#import <CoreMedia/CoreMedia.h>
#import <AVFoundation/AVFoundation.h>

#import <AssetsLibrary/AssetsLibrary.h>		//<<Can delete if not storing videos to the photo library.  Delete the assetslibrary framework too requires this)

#define CAPTURE_FRAMES_PER_SECOND		20

@interface ViewController : UIViewController
<AVCaptureFileOutputRecordingDelegate>
{
    BOOL WeAreRecording;
    
    AVCaptureSession *CaptureSession;
    AVCaptureMovieFileOutput *MovieFileOutput;
    AVCaptureDeviceInput *VideoInputDevice;
    AVCaptureDevice *audioCaptureDevice;
}

@property (weak, nonatomic) IBOutlet UIButton *tap;
@property (retain) AVCaptureVideoPreviewLayer *PreviewLayer;

- (void) CameraSetOutputProperties;
- (AVCaptureDevice *) CameraWithPosition:(AVCaptureDevicePosition) Position;
- (IBAction)StartStopButtonPressed:(id)sender;
- (IBAction)CameraToggleButtonPressed:(id)sender;

@end