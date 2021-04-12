/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/


@protocol SUCellConfigurationView;
#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
@class UIView;

@interface SUCellConfiguration : NSObject {

	id _context;
	unsigned _isDeleteConfirmationVisible : 1;
	CGSize _layoutSize;
	unsigned _needsDisplay : 1;
	id _representedObject;
	UIView*<SUCellConfigurationView> _view;

}

@property (nonatomic,retain) id context; 
@property (nonatomic,retain) id representedObject;                               //@synthesize representedObject=_representedObject - In the implementation block
@property (assign,nonatomic) CGSize layoutSize;                                  //@synthesize layoutSize=_layoutSize - In the implementation block
@property (assign,nonatomic) BOOL needsDisplay; 
@property (assign,nonatomic) UIView*<SUCellConfigurationView> view;              //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfImages; 
@property (nonatomic,readonly) unsigned long long numberOfLabels; 
@property (assign,nonatomic) BOOL isDeleteConfirmationVisible; 
+(double)minimumRowHeight;
+(double)rowHeightForContext:(id)arg1 representedObject:(id)arg2 ;
+(id)copyDefaultContext;
-(void)dealloc;
-(id)context;
-(void)setContext:(id)arg1 ;
-(CGSize)layoutSize;
-(UIView*<SUCellConfigurationView>)view;
-(BOOL)needsDisplay;
-(void)setView:(UIView*<SUCellConfigurationView>)arg1 ;
-(void)reloadData;
-(void)setLayoutSize:(CGSize)arg1 ;
-(id)representedObject;
-(void)setRepresentedObject:(id)arg1 ;
-(void)setNeedsDisplay:(BOOL)arg1 ;
-(unsigned long long)numberOfImages;
-(unsigned long long)indexOfLabelForPurchaseAnimation;
-(void)drawBackgroundWithModifiers:(unsigned long long)arg1 ;
-(void)drawWithModifiers:(unsigned long long)arg1 ;
-(unsigned long long)numberOfLabels;
-(id)stringForLabelAtIndex:(unsigned long long)arg1 ;
-(CGRect)frameForLabelAtIndex:(unsigned long long)arg1 ;
-(id)fontForLabelAtIndex:(unsigned long long)arg1 ;
-(long long)textAlignmentForLabelAtIndex:(unsigned long long)arg1 ;
-(BOOL)getShadowColor:(id*)arg1 offset:(CGSize*)arg2 forLabelAtIndex:(unsigned long long)arg3 withModifiers:(unsigned long long)arg4 ;
-(id)colorForLabelAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2 ;
-(id)imageAtIndex:(unsigned long long)arg1 withModifiers:(unsigned long long)arg2 ;
-(CGRect)frameForImageAtIndex:(unsigned long long)arg1 ;
-(BOOL)isDeleteConfirmationVisible;
-(void)setIsDeleteConfirmationVisible:(BOOL)arg1 ;
-(CGRect)frameForAccessoryViewWithFrame:(CGRect)arg1 ;
@end
