/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariSharedUI/WBSParsecLegacySearchResult.h>
#import <libobjc.A.dylib/WBSParsecSearchGenericResult.h>

@class WBSParsecActionButton, NSNumber, NSArray, NSString, WBSParsecImageRepresentation, WBSParsecAuxiliaryInfo;

@interface WBSParsecSearchGenericResult : WBSParsecLegacySearchResult <WBSParsecSearchGenericResult> {

	WBSParsecActionButton* _actionButton;
	NSNumber* _titleMaximumLines;
	NSArray* _descriptionRichTexts;
	NSString* _footnote;
	NSString* _secondaryTitle;
	WBSParsecImageRepresentation* _secondaryTitleGlyph;
	WBSParsecAuxiliaryInfo* _auxiliaryInfo;
	WBSParsecImageRepresentation* _thumbnail;

}

@property (nonatomic,readonly) NSNumber * titleMaximumLines;                                    //@synthesize titleMaximumLines=_titleMaximumLines - In the implementation block
@property (nonatomic,copy,readonly) NSArray * descriptionRichTexts;                             //@synthesize descriptionRichTexts=_descriptionRichTexts - In the implementation block
@property (nonatomic,copy,readonly) NSString * footnote;                                        //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryTitle;                                  //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * secondaryTitleGlyph;              //@synthesize secondaryTitleGlyph=_secondaryTitleGlyph - In the implementation block
@property (nonatomic,readonly) WBSParsecAuxiliaryInfo * auxiliaryInfo;                          //@synthesize auxiliaryInfo=_auxiliaryInfo - In the implementation block
@property (nonatomic,readonly) WBSParsecImageRepresentation * thumbnail;                        //@synthesize thumbnail=_thumbnail - In the implementation block
+(id)_specializedSchema;
-(id)initWithDictionary:(id)arg1 ;
-(WBSParsecImageRepresentation *)thumbnail;
-(NSString *)footnote;
-(NSString *)secondaryTitle;
-(id)actionButton;
-(WBSParsecAuxiliaryInfo *)auxiliaryInfo;
-(NSNumber *)titleMaximumLines;
-(NSArray *)descriptionRichTexts;
-(WBSParsecImageRepresentation *)secondaryTitleGlyph;
-(id)thumbnailWithSession:(id)arg1 ;
@end

