/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

#import <CarPlay/CPTemplate.h>
#import <libobjc.A.dylib/CPTabBarClientTemplateDelegate.h>

@protocol CPTabBarTemplateDelegate, CPTabBarTemplateProviding;
@class NSArray, CPInterfaceController, NAFuture, CPTemplate, NSString;

@interface CPTabBarTemplate : CPTemplate <CPTabBarClientTemplateDelegate> {

	id<CPTabBarTemplateDelegate> _delegate;
	NSArray* _templates;
	unsigned long long _indexOfSelectedTab;
	id<CPTabBarTemplateProviding> _templateProvider;
	CPInterfaceController* _interfaceController;

}

@property (assign,nonatomic) unsigned long long indexOfSelectedTab;                           //@synthesize indexOfSelectedTab=_indexOfSelectedTab - In the implementation block
@property (nonatomic,retain) id<CPTabBarTemplateProviding> templateProvider;                  //@synthesize templateProvider=_templateProvider - In the implementation block
@property (nonatomic,retain) NAFuture * templateProviderFuture; 
@property (assign,nonatomic,__weak) CPInterfaceController * interfaceController;              //@synthesize interfaceController=_interfaceController - In the implementation block
@property (assign,nonatomic,__weak) id<CPTabBarTemplateDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * templates;                                           //@synthesize templates=_templates - In the implementation block
@property (nonatomic,readonly) CPTemplate * selectedTemplate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)maximumTabCount;
-(id<CPTabBarTemplateDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)indexOfSelectedTab;
-(NSArray *)templates;
-(void)setDelegate:(id<CPTabBarTemplateDelegate>)arg1 ;
-(void)setTrailingNavigationBarButtons:(id)arg1 ;
-(CPInterfaceController *)interfaceController;
-(void)setInterfaceController:(CPInterfaceController *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)handleActionForControlIdentifier:(id)arg1 ;
-(id)leadingNavigationBarButtons;
-(void)setLeadingNavigationBarButtons:(id)arg1 ;
-(id)trailingNavigationBarButtons;
-(id<CPTabBarTemplateProviding>)templateProvider;
-(void)setTemplateProvider:(id<CPTabBarTemplateProviding>)arg1 ;
-(void)validateTemplates:(id)arg1 ;
-(void)setIndexOfSelectedTab:(unsigned long long)arg1 ;
-(id)initWithTemplates:(id)arg1 ;
-(void)updateTemplates:(id)arg1 ;
-(CPTemplate *)selectedTemplate;
@end

