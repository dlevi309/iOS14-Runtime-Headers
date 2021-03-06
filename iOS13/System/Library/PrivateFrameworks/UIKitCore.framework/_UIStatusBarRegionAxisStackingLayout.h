/*
* Generated on Monday, March 1, 2021 at 2:30:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIStatusBarRegionAxisLayout.h>

@class NSString;

@interface _UIStatusBarRegionAxisStackingLayout : NSObject <_UIStatusBarRegionAxisLayout> {

	BOOL _hugging;
	long long _alignment;
	double _interspace;

}

@property (assign,nonatomic) long long alignment;                   //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) double interspace;                     //@synthesize interspace=_interspace - In the implementation block
@property (assign,nonatomic) BOOL hugging;                          //@synthesize hugging=_hugging - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canOverflowItems; 
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4 ;
-(BOOL)canOverflowItems;
-(double)interspace;
-(void)setInterspace:(double)arg1 ;
-(BOOL)hugging;
-(void)setHugging:(BOOL)arg1 ;
@end

