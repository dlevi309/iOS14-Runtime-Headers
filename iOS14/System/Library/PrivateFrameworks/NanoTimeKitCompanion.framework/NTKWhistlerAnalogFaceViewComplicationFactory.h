/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>
#import <libobjc.A.dylib/NTKFaceViewComplicationFactory.h>

@class NTKUtilityComplicationFactory, NTKFaceView, NSString;

@interface NTKWhistlerAnalogFaceViewComplicationFactory : NTKFaceViewComplicationFactory <NTKFaceViewComplicationFactory> {

	NTKUtilityComplicationFactory* _complicationFactory;
	BOOL _usesNarrowTopSlots;
	NTKFaceView* _faceView;
	double _dialDiameter;

}

@property (assign,nonatomic,__weak) NTKFaceView * faceView;              //@synthesize faceView=_faceView - In the implementation block
@property (assign,nonatomic) double dialDiameter;                        //@synthesize dialDiameter=_dialDiameter - In the implementation block
@property (assign,nonatomic) BOOL usesNarrowTopSlots;                    //@synthesize usesNarrowTopSlots=_usesNarrowTopSlots - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initForDevice:(id)arg1 ;
-(long long)complicationPickerStyleForSlot:(id)arg1 ;
-(void)configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(id)pickerMaskForSlot:(id)arg1 ;
-(id)customEditOptionContainerViewForSlot:(id)arg1 ;
-(unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(id)keylineViewForComplicationSlot:(id)arg1 ;
-(id)complicationPickerKeylineViewForComplicationSlot:(id)arg1 ;
-(long long)legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(void)loadLayoutRules;
-(id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)setUsesNarrowTopSlots:(BOOL)arg1 ;
-(void)setFaceView:(NTKFaceView *)arg1 ;
-(void)loadLayoutRulesForFaceView:(id)arg1 dialDiameter:(double)arg2 ;
-(id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4 ;
-(void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3 ;
-(unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2 ;
-(void)loadLayoutRulesForFaceView:(id)arg1 ;
-(NTKFaceView *)faceView;
-(double)dialDiameter;
-(void)setDialDiameter:(double)arg1 ;
-(BOOL)_isCornerComplicationForSlot:(id)arg1 ;
-(id)_cornerKeylineViewForSlot:(id)arg1 ;
-(BOOL)_isCenterComplicationForSlot:(id)arg1 ;
-(BOOL)_convertCornerSlot:(id)arg1 toPosition:(long long*)arg2 ;
-(BOOL)usesNarrowTopSlots;
-(CGPoint)circularComplicationCenterForSlot:(id)arg1 inFaceBounds:(CGRect)arg2 ;
-(BOOL)_convertCircularSlot:(id)arg1 toPosition:(long long*)arg2 ;
-(id)initWithFaceView:(id)arg1 dialDiameter:(double)arg2 device:(id)arg3 ;
-(BOOL)isCornerComplicationForSlot:(id)arg1 ;
-(void)setAlpha:(double)arg1 faceView:(id)arg2 ;
@end

