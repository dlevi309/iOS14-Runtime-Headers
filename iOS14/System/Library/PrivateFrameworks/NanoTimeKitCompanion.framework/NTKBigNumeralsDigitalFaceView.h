/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKFaceView.h>
#import <libobjc.A.dylib/NTKBigNumeralsDigitalTimeViewDelegate.h>

@class NSString;

@interface NTKBigNumeralsDigitalFaceView : NTKFaceView <NTKBigNumeralsDigitalTimeViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
-(void)layoutSubviews;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_createTimeView;
-(void)_unloadSnapshotContentViews;
-(void)_removeTimeView;
-(CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(id)_renderTimeViewSwatchImageForStyle:(unsigned long long)arg1 typeface:(unsigned long long)arg2 color:(unsigned long long)arg3 ;
-(void)bigNumeralsDigitalTimeViewDidChangeTime;
-(double)_verticalPaddingForStatusBar;
-(void)_prepareForStatusChange:(BOOL)arg1 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
@end

