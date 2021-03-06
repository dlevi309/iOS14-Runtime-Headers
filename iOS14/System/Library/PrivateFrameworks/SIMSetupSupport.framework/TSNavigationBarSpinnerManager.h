/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
*/


@class NSMutableDictionary;

@interface TSNavigationBarSpinnerManager : NSObject {

	NSMutableDictionary* _navigationItems;
	NSMutableDictionary* _previousLeftBarButtonItems;
	NSMutableDictionary* _previousRightBarButtonItems;

}

@property (retain) NSMutableDictionary * navigationItems;                          //@synthesize navigationItems=_navigationItems - In the implementation block
@property (retain) NSMutableDictionary * previousLeftBarButtonItems;               //@synthesize previousLeftBarButtonItems=_previousLeftBarButtonItems - In the implementation block
@property (retain) NSMutableDictionary * previousRightBarButtonItems;              //@synthesize previousRightBarButtonItems=_previousRightBarButtonItems - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSMutableDictionary *)navigationItems;
-(void)setNavigationItems:(NSMutableDictionary *)arg1 ;
-(void)startSpinnerInNavigationItem:(id)arg1 withIdentifier:(id)arg2 ;
-(void)stopSpinnerForIdentifier:(id)arg1 ;
-(void)setPreviousLeftBarButtonItems:(NSMutableDictionary *)arg1 ;
-(void)setPreviousRightBarButtonItems:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)previousLeftBarButtonItems;
-(NSMutableDictionary *)previousRightBarButtonItems;
-(void)stopSpinnerInNavigationItem:(id)arg1 withIdentifier:(id)arg2 ;
@end

