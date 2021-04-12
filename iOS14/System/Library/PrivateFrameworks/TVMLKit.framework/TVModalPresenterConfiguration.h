/*
* Generated on Thursday, January 14, 2021 at 2:28:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/


#import <TVMLKit/TVMLKit-Structs.h>
@class NSString, UIView;

@interface TVModalPresenterConfiguration : NSObject {

	BOOL _allowsModalOverModal;
	BOOL _allowsMenuDismissal;
	BOOL _navigationBarHidden;
	NSString* _barButtonID;
	unsigned long long _configurationType;
	long long _presentationStyle;
	UIView* _sourceView;
	CGSize _formSheetSize;
	CGSize _popoverSize;
	CGRect _sourceRect;

}

@property (assign,nonatomic) BOOL allowsModalOverModal;                         //@synthesize allowsModalOverModal=_allowsModalOverModal - In the implementation block
@property (assign,nonatomic) BOOL allowsMenuDismissal;                          //@synthesize allowsMenuDismissal=_allowsMenuDismissal - In the implementation block
@property (nonatomic,copy) NSString * barButtonID;                              //@synthesize barButtonID=_barButtonID - In the implementation block
@property (assign,nonatomic) unsigned long long configurationType;              //@synthesize configurationType=_configurationType - In the implementation block
@property (assign,nonatomic) CGSize formSheetSize;                              //@synthesize formSheetSize=_formSheetSize - In the implementation block
@property (assign,nonatomic) CGSize popoverSize;                                //@synthesize popoverSize=_popoverSize - In the implementation block
@property (assign,nonatomic) BOOL navigationBarHidden;                          //@synthesize navigationBarHidden=_navigationBarHidden - In the implementation block
@property (assign,nonatomic) long long presentationStyle;                       //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                               //@synthesize sourceView=_sourceView - In the implementation block
@property (assign,nonatomic) CGRect sourceRect;                                 //@synthesize sourceRect=_sourceRect - In the implementation block
-(long long)presentationStyle;
-(id)init;
-(void)setPresentationStyle:(long long)arg1 ;
-(void)setSourceView:(UIView *)arg1 ;
-(unsigned long long)configurationType;
-(void)setConfigurationType:(unsigned long long)arg1 ;
-(UIView *)sourceView;
-(id)initWithDictionary:(id)arg1 ;
-(void)setSourceRect:(CGRect)arg1 ;
-(CGRect)sourceRect;
-(void)setNavigationBarHidden:(BOOL)arg1 ;
-(CGSize)formSheetSize;
-(void)setFormSheetSize:(CGSize)arg1 ;
-(BOOL)navigationBarHidden;
-(CGSize)popoverSize;
-(BOOL)allowsModalOverModal;
-(NSString *)barButtonID;
-(void)_configureWithDictionary:(id)arg1 ;
-(void)setAllowsModalOverModal:(BOOL)arg1 ;
-(BOOL)allowsMenuDismissal;
-(void)setAllowsMenuDismissal:(BOOL)arg1 ;
-(void)setBarButtonID:(NSString *)arg1 ;
-(void)setPopoverSize:(CGSize)arg1 ;
@end
