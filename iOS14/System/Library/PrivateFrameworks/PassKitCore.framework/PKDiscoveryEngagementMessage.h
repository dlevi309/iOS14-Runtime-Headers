/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKDiscoveryObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, PKDiscoveryEngagementMessageAction;

@interface PKDiscoveryEngagementMessage : PKDiscoveryObject <NSSecureCoding, NSCopying> {

	BOOL _reportIdentifierToAggd;
	long long _type;
	long long _passQualifier;
	NSString* _titleKey;
	NSString* _messageKey;
	NSDictionary* _iconURLs;
	PKDiscoveryEngagementMessageAction* _action;
	NSString* _localizedTitle;
	NSString* _localizedMessage;

}

@property (assign,nonatomic) long long type;                                                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) long long passQualifier;                                                   //@synthesize passQualifier=_passQualifier - In the implementation block
@property (nonatomic,retain) NSString * titleKey;                                                       //@synthesize titleKey=_titleKey - In the implementation block
@property (nonatomic,retain) NSString * messageKey;                                                     //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,retain) NSDictionary * iconURLs;                                                   //@synthesize iconURLs=_iconURLs - In the implementation block
@property (nonatomic,retain) PKDiscoveryEngagementMessageAction * action;                               //@synthesize action=_action - In the implementation block
@property (assign,getter=canReportIdentifierToAggd,nonatomic) BOOL reportIdentifierToAggd;              //@synthesize reportIdentifierToAggd=_reportIdentifierToAggd - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                                               //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) NSString * localizedMessage;                                             //@synthesize localizedMessage=_localizedMessage - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)localizedTitle;
-(BOOL)canReportIdentifierToAggd;
-(void)updateWithDiscoveryEngagementMessage:(id)arg1 ;
-(void)setPassQualifier:(long long)arg1 ;
-(void)setReportIdentifierToAggd:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)iconURLs;
-(PKDiscoveryEngagementMessageAction *)action;
-(void)setType:(long long)arg1 ;
-(void)setAction:(PKDiscoveryEngagementMessageAction *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)titleKey;
-(id)description;
-(void)setTitleKey:(NSString *)arg1 ;
-(long long)passQualifier;
-(void)localizeWithBundle:(id)arg1 ;
-(void)updateForRuleResult:(BOOL)arg1 ;
-(void)setMessageKey:(NSString *)arg1 ;
-(long long)type;
-(NSString *)messageKey;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedMessage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIconURLs:(NSDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

