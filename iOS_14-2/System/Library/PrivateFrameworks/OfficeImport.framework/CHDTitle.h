/*
* Generated on Thursday, January 14, 2021 at 2:28:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class CHDChart, CHDFormula, EDString, OADGraphicProperties;

@interface CHDTitle : NSObject {

	CHDChart* mChart;
	BOOL mIsAutoGenerated;
	BOOL mPositionAutoGenerated;
	BOOL mSizeAutoGenerated;
	BOOL mIsOverlay;
	CHDFormula* mName;
	EDString* mLastCachedName;
	OADGraphicProperties* mGraphicProperties;
	double mRotation;

}
-(void)setIsOverlay:(BOOL)arg1 ;
-(id)name;
-(BOOL)isOverlay;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)graphicProperties;
-(id)lastCachedName;
-(id)initWithChart:(id)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setIsAutoGenerated:(BOOL)arg1 ;
-(void)setLastCachedName:(id)arg1 ;
-(void)setIsPositionAutoGenerated:(BOOL)arg1 ;
-(void)setTitleRotationAngle:(double)arg1 ;
-(BOOL)isAutoSizeAndPosition;
-(BOOL)isSizeAutoGenerated;
-(BOOL)isCachedTitleEmpty;
-(BOOL)isPositionAutoGenerated;
-(BOOL)isTitleVisible;
-(double)titleRotationAngle;
-(BOOL)isAutoGenerated;
-(void)setIsSizeAutoGenerated:(BOOL)arg1 ;
@end
