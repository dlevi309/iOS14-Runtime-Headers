/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SUScriptNavigationItem, NSArray, SUScriptButton, NSString;

@interface SUScriptNavigationBar : SUScriptObject

@property (readonly) SUScriptNavigationItem * backNavigationItem; 
@property (assign) long long barStyle; 
@property (readonly) NSArray * navigationItems; 
@property (copy) id translucent; 
@property (readonly) SUScriptNavigationItem * topNavigationItem; 
@property (readonly) long long barStyleBlack; 
@property (readonly) long long barStyleDefault; 
@property (retain) SUScriptButton * leftButton; 
@property (retain) id<SUScriptNavigationItem> leftItem; 
@property (retain) NSString * prompt; 
@property (retain) SUScriptButton * rightButton; 
@property (retain) id<SUScriptNavigationItem> rightItem; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)setPrompt:(NSString *)arg1 ;
-(NSString *)prompt;
-(SUScriptButton *)leftButton;
-(void)setTranslucent:(id)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(long long)barStyle;
-(id)init;
-(SUScriptButton *)rightButton;
-(id)attributeKeys;
-(id<SUScriptNavigationItem>)leftItem;
-(void)setRightButton:(SUScriptButton *)arg1 ;
-(void)setLeftItem:(id<SUScriptNavigationItem>)arg1 ;
-(id)_className;
-(void)setRightItem:(id<SUScriptNavigationItem>)arg1 ;
-(void)setLeftButton:(SUScriptButton *)arg1 ;
-(NSArray *)navigationItems;
-(void)setNavigationItems:(NSArray *)arg1 ;
-(id<SUScriptNavigationItem>)rightItem;
-(id)scriptAttributeKeys;
-(id)translucent;
-(void)setLeftButton:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightButton:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithNativeNavigationBar:(id)arg1 ;
-(id)_nativeNavigationBar;
-(void)tearDownUserInterface;
-(id)_topNavigationItem;
-(void)setLeftItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_copyTopNavigationItem;
-(id)buttonWithTitle:(id)arg1 style:(id)arg2 target:(id)arg3 action:(id)arg4 ;
-(SUScriptNavigationItem *)backNavigationItem;
-(void)setBackNavigationItem:(SUScriptNavigationItem *)arg1 ;
-(void)setTopNavigationItem:(SUScriptNavigationItem *)arg1 ;
-(SUScriptNavigationItem *)topNavigationItem;
-(long long)barStyleBlack;
-(long long)barStyleDefault;
@end

