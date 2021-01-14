/*
* Generated on Thursday, January 14, 2021 at 2:24:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
*/


@protocol HKClinicalBrandable;
#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
@class NSString, UIImage, UIColor, HKUIMetricColors, HKInspectableValueInRange, HKMedicalRecord, WDMedicalRecordCategorySummary, HKConcept, NSNumber;

@interface WDMedicalRecordDisplayItem : NSObject {

	BOOL _extraTopPadding;
	BOOL _separatorHidden;
	BOOL _showDisclosureIndicator;
	BOOL _useRegularFontForSubtitle;
	long long _displayItemType;
	long long _separatorStyle;
	long long _placement;
	long long _recordCategoryType;
	NSString* _title;
	NSString* _subtitle;
	NSString* _dateString;
	UIImage* _image;
	UIColor* _backgroundColor;
	HKUIMetricColors* _metricColors;
	HKInspectableValueInRange* _chartValueWithRange;
	NSString* _valueString;
	NSString* _unitString;
	HKMedicalRecord* _medicalRecord;
	WDMedicalRecordCategorySummary* _categorySummary;
	id<HKClinicalBrandable> _brandableObject;
	NSString* _panelName;
	NSString* _headerString;
	HKConcept* _concept;
	NSNumber* _recordCount;
	UIEdgeInsets _separatorInsets;

}

@property (assign,nonatomic) long long displayItemType;                                            //@synthesize displayItemType=_displayItemType - In the implementation block
@property (assign,nonatomic) BOOL extraTopPadding;                                                 //@synthesize extraTopPadding=_extraTopPadding - In the implementation block
@property (assign,nonatomic) long long separatorStyle;                                             //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (assign,nonatomic) BOOL separatorHidden;                                                 //@synthesize separatorHidden=_separatorHidden - In the implementation block
@property (assign,nonatomic) UIEdgeInsets separatorInsets;                                         //@synthesize separatorInsets=_separatorInsets - In the implementation block
@property (assign,nonatomic) long long placement;                                                  //@synthesize placement=_placement - In the implementation block
@property (assign,nonatomic) long long recordCategoryType;                                         //@synthesize recordCategoryType=_recordCategoryType - In the implementation block
@property (assign,nonatomic) BOOL showDisclosureIndicator;                                         //@synthesize showDisclosureIndicator=_showDisclosureIndicator - In the implementation block
@property (assign,nonatomic) BOOL useRegularFontForSubtitle;                                       //@synthesize useRegularFontForSubtitle=_useRegularFontForSubtitle - In the implementation block
@property (nonatomic,retain) NSString * title;                                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * dateString;                                                //@synthesize dateString=_dateString - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                            //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) HKUIMetricColors * metricColors;                                      //@synthesize metricColors=_metricColors - In the implementation block
@property (nonatomic,retain) HKInspectableValueInRange * chartValueWithRange;                      //@synthesize chartValueWithRange=_chartValueWithRange - In the implementation block
@property (nonatomic,retain) NSString * valueString;                                               //@synthesize valueString=_valueString - In the implementation block
@property (nonatomic,retain) NSString * unitString;                                                //@synthesize unitString=_unitString - In the implementation block
@property (nonatomic,retain) HKMedicalRecord * medicalRecord;                                      //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (assign,nonatomic,__weak) WDMedicalRecordCategorySummary * categorySummary;              //@synthesize categorySummary=_categorySummary - In the implementation block
@property (nonatomic,retain) id<HKClinicalBrandable> brandableObject;                              //@synthesize brandableObject=_brandableObject - In the implementation block
@property (nonatomic,retain) NSString * panelName;                                                 //@synthesize panelName=_panelName - In the implementation block
@property (nonatomic,retain) NSString * headerString;                                              //@synthesize headerString=_headerString - In the implementation block
@property (nonatomic,retain) HKConcept * concept;                                                  //@synthesize concept=_concept - In the implementation block
@property (nonatomic,retain) NSNumber * recordCount;                                               //@synthesize recordCount=_recordCount - In the implementation block
+(id)detailTitleItem;
+(id)detailSubtitleItem;
+(id)detailSubtitleItemWithTitle:(id)arg1 subtitle:(id)arg2 ;
+(id)recordCardItem;
+(id)timelineSummaryCategoryTitleItem;
+(id)timelineSummaryCategoryTitleItemWithCategoryType:(long long)arg1 ;
+(id)timelineSummaryDetailCategoryTitleItemWithMedicalRecord:(id)arg1 ;
+(id)timelineSummaryCategoryMinimizedItem;
+(id)timelineSummaryValueItem;
+(id)timelineSummaryCategoryMinimizedItemWithCategoryType:(long long)arg1 ;
+(id)timelineSummarySourceTitleItem;
+(id)timelineSummaryContentWithSubtitleItem;
+(id)timelineSummaryReferenceRangeItem;
+(id)timelineSummaryAppendixItem;
+(id)timelineSummaryPanelTitleItem;
+(id)detailTitleItemWithTitle:(id)arg1 subtitle:(id)arg2 ;
+(id)detailSubtitleItemWithTitle:(id)arg1 subtitle:(id)arg2 extraTopPadding:(BOOL)arg3 ;
+(id)sectionHeaderItem;
+(id)accountSourceItem;
+(id)standaloneItem;
+(id)conceptHeaderItemWithCategoryType:(long long)arg1 title:(id)arg2 ;
+(id)conceptCardItemWithCategoryType:(long long)arg1 ;
-(NSString *)valueString;
-(void)setSeparatorStyle:(long long)arg1 ;
-(NSString *)unitString;
-(long long)placement;
-(long long)separatorStyle;
-(void)setImage:(UIImage *)arg1 ;
-(id)init;
-(NSNumber *)recordCount;
-(BOOL)showDisclosureIndicator;
-(BOOL)useRegularFontForSubtitle;
-(void)setUseRegularFontForSubtitle:(BOOL)arg1 ;
-(HKUIMetricColors *)metricColors;
-(void)setChartValueWithRange:(HKInspectableValueInRange *)arg1 ;
-(void)setUnitString:(NSString *)arg1 ;
-(HKMedicalRecord *)medicalRecord;
-(void)setMedicalRecord:(HKMedicalRecord *)arg1 ;
-(WDMedicalRecordCategorySummary *)categorySummary;
-(void)setCategorySummary:(WDMedicalRecordCategorySummary *)arg1 ;
-(id<HKClinicalBrandable>)brandableObject;
-(void)setBrandableObject:(id<HKClinicalBrandable>)arg1 ;
-(void)setPanelName:(NSString *)arg1 ;
-(void)setHeaderString:(NSString *)arg1 ;
-(void)setPlacement:(long long)arg1 ;
-(HKConcept *)concept;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setValueString:(NSString *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIImage *)image;
-(UIColor *)backgroundColor;
-(id)description;
-(void)setConcept:(HKConcept *)arg1 ;
-(void)setRecordCount:(NSNumber *)arg1 ;
-(NSString *)headerString;
-(BOOL)separatorHidden;
-(NSString *)dateString;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)panelName;
-(void)setDateString:(NSString *)arg1 ;
-(long long)displayItemType;
-(HKInspectableValueInRange *)chartValueWithRange;
-(void)setDisplayItemType:(long long)arg1 ;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(void)setMetricColors:(HKUIMetricColors *)arg1 ;
-(void)setRecordCategoryType:(long long)arg1 ;
-(long long)recordCategoryType;
-(void)setShowDisclosureIndicator:(BOOL)arg1 ;
-(void)setExtraTopPadding:(BOOL)arg1 ;
-(void)setSeparatorInsets:(UIEdgeInsets)arg1 ;
-(NSString *)title;
-(BOOL)extraTopPadding;
-(UIEdgeInsets)separatorInsets;
@end
