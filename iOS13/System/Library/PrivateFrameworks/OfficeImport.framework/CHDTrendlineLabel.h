/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class EDResources, CHDFormula, OADGraphicProperties, EDString;

@interface CHDTrendlineLabel : NSObject {

	EDResources* mResources;
	CHDFormula* mName;
	unsigned long long mContentFormatId;
	BOOL mContentFormatDerived;
	BOOL mGeneratedText;
	BOOL mAutomaticLabelDeleted;
	OADGraphicProperties* mGraphicProperties;
	EDString* mLastCachedName;

}

@property (nonatomic,retain) EDString * lastCachedName; 
+(id)trendlineLabelWithResources:(id)arg1 ;
-(id)description;
-(id)name;
-(id)initWithResources:(id)arg1 ;
-(id)graphicProperties;
-(unsigned long long)contentFormatId;
-(id)contentFormat;
-(EDString *)lastCachedName;
-(void)setContentFormatId:(unsigned long long)arg1 ;
-(void)setGraphicProperties:(id)arg1 ;
-(void)setLastCachedName:(EDString *)arg1 ;
-(void)setName:(id)arg1 chart:(id)arg2 ;
-(void)setIsContentFormatDerivedFromDataPoints:(BOOL)arg1 ;
-(void)setGeneratedText:(BOOL)arg1 ;
-(void)setAutomaticLabelDeleted:(BOOL)arg1 ;
-(void)setContentFormat:(id)arg1 ;
-(BOOL)isContentFormatDerivedFromDataPoints;
-(BOOL)isGeneratedText;
-(BOOL)isAutomaticLabelDeleted;
@end

