/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSString, NSArray;

@interface WFMessageTrigger : WFTrigger {

	NSString* _selectedContents;
	NSArray* _selectedSenders;
	NSArray* _selectedSendersStrings;

}

@property (nonatomic,retain) NSString * selectedContents;                   //@synthesize selectedContents=_selectedContents - In the implementation block
@property (nonatomic,retain) NSArray * selectedSenders;                     //@synthesize selectedSenders=_selectedSenders - In the implementation block
@property (nonatomic,retain) NSArray * selectedSendersStrings;              //@synthesize selectedSendersStrings=_selectedSendersStrings - In the implementation block
+(id)triggerTypeIcon;
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(BOOL)requiresEventInfoAsInput;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(NSArray *)selectedSenders;
-(NSString *)selectedContents;
-(NSArray *)selectedSendersStrings;
-(id)localizedPastTenseDescription;
-(id)localizedDescriptionWithConfigurationSummaryWithCount:(unsigned long long)arg1 ;
-(BOOL)hasValidConfiguration;
-(void)setSelectedSenders:(NSArray *)arg1 ;
-(void)setSelectedContents:(NSString *)arg1 ;
-(void)setSelectedSendersStrings:(NSArray *)arg1 ;
@end

