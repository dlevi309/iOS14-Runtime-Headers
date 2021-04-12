/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIViewController, NSString, NSURL, UITabBarItem, UIColor;

@interface SKUITabBarItem : NSObject <NSCopying> {

	BOOL _alwaysCreatesRootViewController;
	long long _barTintStyle;
	UIViewController* _customRootViewController;
	NSString* _metricsIdentifier;
	NSURL* _rootURL;
	Class _rootViewControllerClass;
	NSString* _tabIdentifier;
	UITabBarItem* _underlyingTabBarItem;
	UIColor* _userInterfaceTintColor;

}

@property (nonatomic,readonly) NSString * tabIdentifier;                               //@synthesize tabIdentifier=_tabIdentifier - In the implementation block
@property (assign,nonatomic) BOOL alwaysCreatesRootViewController;                     //@synthesize alwaysCreatesRootViewController=_alwaysCreatesRootViewController - In the implementation block
@property (assign,nonatomic) long long barTintStyle;                                   //@synthesize barTintStyle=_barTintStyle - In the implementation block
@property (nonatomic,copy) NSString * metricsIdentifier;                               //@synthesize metricsIdentifier=_metricsIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * rootURL;                                            //@synthesize rootURL=_rootURL - In the implementation block
@property (nonatomic,retain) UIViewController * customRootViewController;              //@synthesize customRootViewController=_customRootViewController - In the implementation block
@property (nonatomic,retain) Class rootViewControllerClass;                            //@synthesize rootViewControllerClass=_rootViewControllerClass - In the implementation block
@property (nonatomic,retain) UITabBarItem * underlyingTabBarItem;                      //@synthesize underlyingTabBarItem=_underlyingTabBarItem - In the implementation block
@property (nonatomic,retain) UIColor * userInterfaceTintColor;                         //@synthesize userInterfaceTintColor=_userInterfaceTintColor - In the implementation block
-(id)init;
-(void)setRootURL:(NSURL *)arg1 ;
-(id)description;
-(NSURL *)rootURL;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)barTintStyle;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)tabIdentifier;
-(UITabBarItem *)underlyingTabBarItem;
-(UIViewController *)customRootViewController;
-(void)setUnderlyingTabBarItem:(UITabBarItem *)arg1 ;
-(BOOL)alwaysCreatesRootViewController;
-(Class)rootViewControllerClass;
-(NSString *)metricsIdentifier;
-(UIColor *)userInterfaceTintColor;
-(id)initWithTabIdentifier:(id)arg1 ;
-(void)setAlwaysCreatesRootViewController:(BOOL)arg1 ;
-(void)setBarTintStyle:(long long)arg1 ;
-(void)setCustomRootViewController:(UIViewController *)arg1 ;
-(void)setMetricsIdentifier:(NSString *)arg1 ;
-(void)setRootViewControllerClass:(Class)arg1 ;
-(void)setUserInterfaceTintColor:(UIColor *)arg1 ;
@end
