/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/


@protocol NACVolumeControllerDelegate <NSObject>
@optional
-(void)volumeControllerDidUpdateVolumeValue:(id)arg1;
-(void)volumeControllerDidUpdateVolumeControlAvailibility:(id)arg1;
-(void)volumeControllerDidUpdateSystemMutedState:(id)arg1;
-(void)volumeControllerDidUpdateMutedState:(id)arg1;
-(void)volumeControllerDidUpdateEUVolumeLimit:(id)arg1;
-(void)volumeControllerDidUpdateVolumeWarningEnabled:(id)arg1;
-(void)volumeControllerDidUpdateVolumeWarningState:(id)arg1;
-(void)volumeControllerDidUpdateHapticState:(id)arg1;
-(void)volumeControllerDidUpdateProminentHapticState:(id)arg1;
-(void)volumeControllerDidUpdateHapticIntensity:(id)arg1;
-(void)volumeControllerDidUpdateAvailableListeningModes:(id)arg1;
-(void)volumeControllerDidUpdateCurrentListeningMode:(id)arg1;
-(void)volumeController:(id)arg1 didFailToSetCurrentListeningModeWithError:(id)arg2;

@end

