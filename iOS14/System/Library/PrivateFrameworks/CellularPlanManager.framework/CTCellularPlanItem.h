/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CellularPlanManager.framework/CellularPlanManager
*/

#import <CellularPlanManager/CellularPlanManager-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTCellularPlan, CTUserLabel, NSNumber, NSUUID;

@interface CTCellularPlanItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	NSString* _iccid;
	BOOL _shouldDisplayType;
	BOOL _shouldAutoSelectWhenInRange;
	BOOL _shouldDisplayExtendedConsentInfo;
	BOOL _isSimStateValid;
	BOOL _shouldDisplay;
	BOOL _shouldAppearDisabled;
	BOOL _isActiveDataPlan;
	BOOL _isDefaultVoice;
	BOOL _isSelectable;
	NSString* _label;
	CTCellularPlan* _plan;
	long long _type;
	long long _lockState;
	NSString* _uuid;
	NSString* _phoneNumber;
	CTUserLabel* _userLabel;
	NSNumber* _isSelectedOverride;
	NSUUID* _companionSlotUuid;
	NSString* _companionSimLabelId;

}

@property (nonatomic,retain) NSNumber * isSelectedOverride;                      //@synthesize isSelectedOverride=_isSelectedOverride - In the implementation block
@property (assign,nonatomic) long long type;                                     //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long lockState;                                //@synthesize lockState=_lockState - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayType;                             //@synthesize shouldDisplayType=_shouldDisplayType - In the implementation block
@property (assign,nonatomic) BOOL shouldAutoSelectWhenInRange;                   //@synthesize shouldAutoSelectWhenInRange=_shouldAutoSelectWhenInRange - In the implementation block
@property (assign,nonatomic) BOOL isSimStateValid;                               //@synthesize isSimStateValid=_isSimStateValid - In the implementation block
@property (assign,nonatomic) BOOL isSelectable;                                  //@synthesize isSelectable=_isSelectable - In the implementation block
@property (assign,nonatomic) BOOL shouldAppearDisabled;                          //@synthesize shouldAppearDisabled=_shouldAppearDisabled - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplay;                                 //@synthesize shouldDisplay=_shouldDisplay - In the implementation block
@property (assign,nonatomic) BOOL isActiveDataPlan;                              //@synthesize isActiveDataPlan=_isActiveDataPlan - In the implementation block
@property (assign,nonatomic) BOOL isDefaultVoice;                                //@synthesize isDefaultVoice=_isDefaultVoice - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayExtendedConsentInfo;              //@synthesize shouldDisplayExtendedConsentInfo=_shouldDisplayExtendedConsentInfo - In the implementation block
@property (nonatomic,copy) NSUUID * companionSlotUuid;                           //@synthesize companionSlotUuid=_companionSlotUuid - In the implementation block
@property (nonatomic,copy) NSString * companionSimLabelId;                       //@synthesize companionSimLabelId=_companionSimLabelId - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                             //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,retain) NSString * label;                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) CTUserLabel * userLabel;                            //@synthesize userLabel=_userLabel - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) CTCellularPlan * plan;                            //@synthesize plan=_plan - In the implementation block
@property (nonatomic,readonly) BOOL isBackedByCellularPlan; 
@property (nonatomic,readonly) BOOL isSelected; 
@property (nonatomic,readonly) BOOL isInstalling; 
@property (nonatomic,readonly) NSString * uuid;                                  //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSString * iccid; 
@property (nonatomic,readonly) NSString * carrierName; 
+(BOOL)supportsSecureCoding;
-(CTCellularPlan *)plan;
-(void)setLockState:(long long)arg1 ;
-(NSString *)iccid;
-(long long)lockState;
-(long long)compare:(id)arg1 ;
-(NSString *)uuid;
-(id)typeAsString:(long long)arg1 ;
-(BOOL)isInstalling;
-(id)customDescription;
-(NSString *)carrierName;
-(BOOL)isSelected;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(BOOL)isSelectable;
-(NSString *)name;
-(id)description;
-(CTUserLabel *)userLabel;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsSelectable:(BOOL)arg1 ;
-(NSString *)label;
-(BOOL)isBackedByCellularPlan;
-(BOOL)isActiveDataPlan;
-(BOOL)isSimStateValid;
-(BOOL)shouldDisplay;
-(void)setShouldDisplay:(BOOL)arg1 ;
-(NSUUID *)companionSlotUuid;
-(id)initWithCellularPlan:(id)arg1 uuid:(id)arg2 iccid:(id)arg3 name:(id)arg4 type:(long long)arg5 phoneNumber:(id)arg6 label:(id)arg7 ;
-(NSNumber *)isSelectedOverride;
-(id)initWithCellularPlan:(id)arg1 uuid:(id)arg2 ;
-(id)initWithCellularPlan:(id)arg1 uuid:(id)arg2 type:(long long)arg3 phoneNumber:(id)arg4 label:(id)arg5 ;
-(id)initWithIccid:(id)arg1 uuid:(id)arg2 name:(id)arg3 phoneNumber:(id)arg4 label:(id)arg5 ;
-(NSString *)companionSimLabelId;
-(BOOL)shouldDisplayType;
-(void)setShouldDisplayType:(BOOL)arg1 ;
-(BOOL)shouldAutoSelectWhenInRange;
-(void)setShouldAutoSelectWhenInRange:(BOOL)arg1 ;
-(BOOL)shouldDisplayExtendedConsentInfo;
-(void)setShouldDisplayExtendedConsentInfo:(BOOL)arg1 ;
-(void)setIsSimStateValid:(BOOL)arg1 ;
-(BOOL)shouldAppearDisabled;
-(void)setShouldAppearDisabled:(BOOL)arg1 ;
-(void)setIsActiveDataPlan:(BOOL)arg1 ;
-(BOOL)isDefaultVoice;
-(void)setIsDefaultVoice:(BOOL)arg1 ;
-(void)setUserLabel:(CTUserLabel *)arg1 ;
-(void)setIsSelectedOverride:(NSNumber *)arg1 ;
-(void)setCompanionSlotUuid:(NSUUID *)arg1 ;
-(void)setCompanionSimLabelId:(NSString *)arg1 ;
@end

