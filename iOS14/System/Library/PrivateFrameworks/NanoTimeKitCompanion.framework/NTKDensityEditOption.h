/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@interface NTKDensityEditOption : NTKEnumeratedEditOption

@property (nonatomic,readonly) unsigned long long density; 
+(id)optionWithDensity:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_snapshotKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_nameLocalizationKeyForValue:(unsigned long long)arg1 forDevice:(id)arg2 ;
+(id)_orderedValuesForDevice:(id)arg1 ;
-(unsigned long long)density;
-(long long)swatchStyle;
-(id)_valueToFaceBundleStringDict;
@end
