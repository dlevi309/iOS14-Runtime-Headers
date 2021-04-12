/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPassContent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSDictionary, NSArray;

@interface PKPaymentPassContent : PKPassContent <NSSecureCoding> {

	BOOL _supportsTransitOnly;
	NSString* _cobrandName;
	NSURL* _transactionServiceURL;
	NSURL* _transactionServiceRegistrationURL;
	NSString* _transactionPushTopic;
	NSURL* _messageServiceURL;
	NSURL* _messageServiceRegistrationURL;
	NSString* _messagePushTopic;
	NSString* _appURLScheme;
	NSString* _customerServiceIdentifier;
	NSDictionary* _localizedSuspendedReasonsByAID;
	NSArray* _availableActions;
	NSArray* _transitCommutePlans;
	unsigned long long _transitCommutePlanType;
	NSDictionary* _localizedEntitlementDescriptions;
	NSArray* _upgradeRequests;

}

@property (nonatomic,copy) NSString * cobrandName;                                       //@synthesize cobrandName=_cobrandName - In the implementation block
@property (nonatomic,copy) NSURL * transactionServiceURL;                                //@synthesize transactionServiceURL=_transactionServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * transactionServiceRegistrationURL;                    //@synthesize transactionServiceRegistrationURL=_transactionServiceRegistrationURL - In the implementation block
@property (nonatomic,copy) NSString * transactionPushTopic;                              //@synthesize transactionPushTopic=_transactionPushTopic - In the implementation block
@property (nonatomic,copy) NSURL * messageServiceURL;                                    //@synthesize messageServiceURL=_messageServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * messageServiceRegistrationURL;                        //@synthesize messageServiceRegistrationURL=_messageServiceRegistrationURL - In the implementation block
@property (nonatomic,copy) NSString * messagePushTopic;                                  //@synthesize messagePushTopic=_messagePushTopic - In the implementation block
@property (nonatomic,copy) NSString * appURLScheme;                                      //@synthesize appURLScheme=_appURLScheme - In the implementation block
@property (nonatomic,copy) NSString * customerServiceIdentifier;                         //@synthesize customerServiceIdentifier=_customerServiceIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * localizedSuspendedReasonsByAID;                //@synthesize localizedSuspendedReasonsByAID=_localizedSuspendedReasonsByAID - In the implementation block
@property (assign,nonatomic) BOOL supportsTransitOnly;                                   //@synthesize supportsTransitOnly=_supportsTransitOnly - In the implementation block
@property (nonatomic,copy) NSArray * availableActions;                                   //@synthesize availableActions=_availableActions - In the implementation block
@property (nonatomic,copy) NSArray * transitCommutePlans;                                //@synthesize transitCommutePlans=_transitCommutePlans - In the implementation block
@property (assign,nonatomic) unsigned long long transitCommutePlanType;                  //@synthesize transitCommutePlanType=_transitCommutePlanType - In the implementation block
@property (nonatomic,copy) NSDictionary * localizedEntitlementDescriptions;              //@synthesize localizedEntitlementDescriptions=_localizedEntitlementDescriptions - In the implementation block
@property (nonatomic,copy) NSArray * upgradeRequests;                                    //@synthesize upgradeRequests=_upgradeRequests - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setCobrandName:(NSString *)arg1 ;
-(NSString *)cobrandName;
-(NSURL *)transactionServiceURL;
-(NSURL *)transactionServiceRegistrationURL;
-(NSString *)transactionPushTopic;
-(NSURL *)messageServiceURL;
-(NSURL *)messageServiceRegistrationURL;
-(NSString *)messagePushTopic;
-(NSString *)appURLScheme;
-(NSString *)customerServiceIdentifier;
-(NSDictionary *)localizedSuspendedReasonsByAID;
-(BOOL)supportsTransitOnly;
-(unsigned long long)transitCommutePlanType;
-(NSArray *)transitCommutePlans;
-(NSArray *)availableActions;
-(NSArray *)upgradeRequests;
-(void)setTransactionServiceURL:(NSURL *)arg1 ;
-(void)setTransactionServiceRegistrationURL:(NSURL *)arg1 ;
-(void)setTransactionPushTopic:(NSString *)arg1 ;
-(void)setMessageServiceURL:(NSURL *)arg1 ;
-(void)setMessageServiceRegistrationURL:(NSURL *)arg1 ;
-(void)setMessagePushTopic:(NSString *)arg1 ;
-(void)setAppURLScheme:(NSString *)arg1 ;
-(void)setCustomerServiceIdentifier:(NSString *)arg1 ;
-(void)setAvailableActions:(NSArray *)arg1 ;
-(void)setTransitCommutePlanType:(unsigned long long)arg1 ;
-(void)setTransitCommutePlans:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3 ;
-(void)setLocalizedSuspendedReasonsByAID:(NSDictionary *)arg1 ;
-(void)setLocalizedEntitlementDescriptions:(NSDictionary *)arg1 ;
-(void)setSupportsTransitOnly:(BOOL)arg1 ;
-(void)setUpgradeRequests:(NSArray *)arg1 ;
-(NSDictionary *)localizedEntitlementDescriptions;
@end
