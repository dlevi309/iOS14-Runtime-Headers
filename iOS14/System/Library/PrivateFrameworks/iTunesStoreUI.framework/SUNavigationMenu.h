/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface SUNavigationMenu : NSObject <NSCopying> {

	NSString* _cancelTitle;
	NSString* _closedTitle;
	long long _initialSelectedIndex;
	long long _location;
	NSArray* _menuItems;
	NSArray* _navigationButtons;
	NSString* _openTitle;

}

@property (nonatomic,readonly) NSString * cancelTitle;                      //@synthesize cancelTitle=_cancelTitle - In the implementation block
@property (nonatomic,readonly) NSString * closedTitle;                      //@synthesize closedTitle=_closedTitle - In the implementation block
@property (nonatomic,readonly) long long initialSelectedIndex;              //@synthesize initialSelectedIndex=_initialSelectedIndex - In the implementation block
@property (assign,nonatomic) long long location;                            //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSArray * menuItems;                         //@synthesize menuItems=_menuItems - In the implementation block
@property (nonatomic,readonly) NSArray * navigationButtons;                 //@synthesize navigationButtons=_navigationButtons - In the implementation block
@property (nonatomic,readonly) NSString * openTitle;                        //@synthesize openTitle=_openTitle - In the implementation block
-(id)init;
-(long long)location;
-(id)initWithDictionary:(id)arg1 ;
-(long long)initialSelectedIndex;
-(void)setLocation:(long long)arg1 ;
-(NSArray *)menuItems;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)navigationButtonForLocation:(id)arg1 ;
-(NSString *)closedTitle;
-(NSString *)openTitle;
-(NSString *)cancelTitle;
-(id)_newNavigationButtonsFromArray:(id)arg1 ;
-(NSArray *)navigationButtons;
-(long long)_locationForString:(id)arg1 ;
-(void)_loadFromDictionary:(id)arg1 ;
-(id)_newMenuItemsFromArray:(id)arg1 ;
@end

