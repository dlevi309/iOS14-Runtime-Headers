/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class OADFill;

@interface CMImageFillMapper : CMMapper {

	OADFill* mFill;
	CGRect mBounds;

}
-(BOOL)isCropped;
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)blipAtIndex:(unsigned)arg1 ;
-(CGRect)uncroppedBox;
-(id)mainSubBlip;
-(id)mapImageFill:(id)arg1 withState:(id)arg2 ;
-(id)convertMetafileToPdf:(id)arg1 state:(id)arg2 ;
-(id)initWithOadFill:(id)arg1 bounds:(CGRect)arg2 parent:(id)arg3 ;
-(void)mapImageFillAt:(id)arg1 toStyle:(id)arg2 withState:(id)arg3 ;
-(void)mapNonImageFillAt:(id)arg1 toStyle:(id)arg2 withState:(id)arg3 ;
@end

