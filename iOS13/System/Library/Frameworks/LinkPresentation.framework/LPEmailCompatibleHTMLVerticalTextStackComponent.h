/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPHTMLComponent.h>

@class LPVerticalTextStackViewStyle, LPCaptionBarPresentationProperties;

@interface LPEmailCompatibleHTMLVerticalTextStackComponent : LPHTMLComponent {

	LPVerticalTextStackViewStyle* _style;
	LPCaptionBarPresentationProperties* _presentationProperties;

}
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)styleSet;
+(id)baseRules;
-(void)buildComponents;
-(id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 themePath:(id)arg3 generator:(id)arg4 ;
-(id)componentForRow:(id)arg1 style:(id)arg2 name:(id)arg3 ;
@end

