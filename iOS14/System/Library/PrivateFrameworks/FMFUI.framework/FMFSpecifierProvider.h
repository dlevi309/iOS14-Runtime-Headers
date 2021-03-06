/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
*/

#import <libobjc.A.dylib/AAUISpecifierProvider.h>

@protocol AAUISpecifierProviderDelegate;
@class NSArray, AIDAAccountManager, NSString;

@interface FMFSpecifierProvider : NSObject <AAUISpecifierProvider> {

	id<AAUISpecifierProviderDelegate> _delegate;
	NSArray* _specifiers;
	AIDAAccountManager* _accountManager;

}

@property (nonatomic,retain) AIDAAccountManager * accountManager;                            //@synthesize accountManager=_accountManager - In the implementation block
@property (assign,nonatomic,__weak) id<AAUISpecifierProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * specifiers;                                             //@synthesize specifiers=_specifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AIDAAccountManager *)accountManager;
-(void)setAccountManager:(AIDAAccountManager *)arg1 ;
-(NSArray *)specifiers;
-(id<AAUISpecifierProviderDelegate>)delegate;
-(id)initWithAccountManager:(id)arg1 ;
-(void)setDelegate:(id<AAUISpecifierProviderDelegate>)arg1 ;
-(void)setSpecifiers:(NSArray *)arg1 ;
-(BOOL)shouldShowLocationSharingSpecifier;
-(void)locationSharingSpecifierWasTapped:(id)arg1 ;
-(BOOL)shouldEnableLocationSharingSpecifier;
-(BOOL)isAccountInGrayMode;
-(BOOL)locationServicesDisabledByRestrictions;
@end

