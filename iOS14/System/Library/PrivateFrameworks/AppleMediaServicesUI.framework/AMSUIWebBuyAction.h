/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <libobjc.A.dylib/AMSPurchaseDelegate.h>
#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class ACAccount, NSString, AMSUIWebClientContext, NSDictionary;

@interface AMSUIWebBuyAction : NSObject <AMSPurchaseDelegate, AMSUIWebActionRunnable> {

	BOOL _legacyBuy;
	BOOL _makeCurrentAccount;
	BOOL _requiresAccount;
	ACAccount* _account;
	NSString* _buyParams;
	long long _type;
	AMSUIWebClientContext* _context;
	NSDictionary* _metricsOverlay;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL makeCurrentAccount;                      //@synthesize makeCurrentAccount=_makeCurrentAccount - In the implementation block
@property (assign,nonatomic) BOOL requiresAccount;                         //@synthesize requiresAccount=_requiresAccount - In the implementation block
@property (nonatomic,retain) NSDictionary * metricsOverlay;                //@synthesize metricsOverlay=_metricsOverlay - In the implementation block
@property (nonatomic,retain) ACAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSString * buyParams;                         //@synthesize buyParams=_buyParams - In the implementation block
@property (assign,nonatomic) BOOL legacyBuy;                               //@synthesize legacyBuy=_legacyBuy - In the implementation block
@property (assign,nonatomic) long long type;                               //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(NSDictionary *)metricsOverlay;
-(void)setMetricsOverlay:(NSDictionary *)arg1 ;
-(void)setType:(long long)arg1 ;
-(AMSUIWebClientContext *)context;
-(BOOL)requiresAccount;
-(void)setRequiresAccount:(BOOL)arg1 ;
-(void)setBuyParams:(NSString *)arg1 ;
-(void)purchase:(id)arg1 handleDialogRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)purchase:(id)arg1 handleAuthenticateRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)purchase:(id)arg1 handleEngagementRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_runBuy;
-(long long)type;
-(NSString *)buyParams;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(BOOL)makeCurrentAccount;
-(void)setMakeCurrentAccount:(BOOL)arg1 ;
-(BOOL)legacyBuy;
-(id)_runLegacyBuy;
-(void)_makeCurrentAccountIfNeeded:(id)arg1 ;
-(void)setLegacyBuy:(BOOL)arg1 ;
@end

