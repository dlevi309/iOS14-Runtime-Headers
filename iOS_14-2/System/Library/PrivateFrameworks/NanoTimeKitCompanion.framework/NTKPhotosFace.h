/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKBasePhotosFace.h>

@interface NTKPhotosFace : NTKBasePhotosFace {

	BOOL _editing;

}
+(BOOL)_customEditModeIsRows:(long long)arg1 forDevice:(id)arg2 ;
+(id)_localizedNameOverrideForCustomEditMode:(long long)arg1 forDevice:(id)arg2 ;
+(BOOL)_customEditMode:(long long)arg1 hasActionForOption:(id)arg2 forDevice:(id)arg3 ;
-(Class)_optionClassForCustomEditMode:(long long)arg1 ;
-(id)_customEditModes;
-(id)_defaultOptionForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(unsigned long long)_numberOfOptionsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(id)_optionAtIndex:(unsigned long long)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(unsigned long long)_indexOfOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_hasOptionsForCustomEditMode:(long long)arg1 ;
-(long long)_customEditModeForUniqueConfiguration;
-(void)_prepareEditOptions;
-(void)_cleanupEditOptions;
@end
