/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <SearchFoundation/SFCardSection.h>
#import <libobjc.A.dylib/SFSocialMediaPostCardSection.h>
@class NSArray, NSString, SFColor, NSNumber, SFImage, SFRichText, NSDictionary, NSData;


@protocol SFSocialMediaPostCardSection <SFCardSection>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) SFColor * backgroundColor; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL nameNoWrap; 
@property (nonatomic,copy) NSNumber * nameMaxLines; 
@property (nonatomic,copy) NSString * handle; 
@property (nonatomic,retain) SFImage * verifiedGlyph; 
@property (nonatomic,retain) SFImage * profilePicture; 
@property (nonatomic,retain) SFRichText * post; 
@property (nonatomic,retain) SFImage * picture; 
@property (nonatomic,copy) NSString * timestamp; 
@property (nonatomic,copy) NSString * footnote; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setHandle:(id)arg1;
-(void)setSeparatorStyle:(int)arg1;
-(int)separatorStyle;
-(SFRichText *)post;
-(NSString *)handle;
-(void)setPunchoutOptions:(id)arg1;
-(void)setPunchoutPickerTitle:(id)arg1;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(void)setCanBeHidden:(BOOL)arg1;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(void)setNameNoWrap:(BOOL)arg1;
-(void)setNameMaxLines:(id)arg1;
-(void)setVerifiedGlyph:(id)arg1;
-(void)setProfilePicture:(id)arg1;
-(NSString *)timestamp;
-(void)setHasTopPadding:(BOOL)arg1;
-(NSData *)jsonData;
-(void)setPost:(id)arg1;
-(void)setType:(id)arg1;
-(void)setBackgroundColor:(id)arg1;
-(SFColor *)backgroundColor;
-(void)setFootnote:(id)arg1;
-(BOOL)nameNoWrap;
-(NSString *)name;
-(NSNumber *)nameMaxLines;
-(SFImage *)verifiedGlyph;
-(SFImage *)profilePicture;
-(SFImage *)picture;
-(NSString *)type;
-(NSString *)footnote;
-(void)setPicture:(id)arg1;
-(void)setName:(id)arg1;
-(NSArray *)punchoutOptions;
-(void)setTimestamp:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, SFColor, NSNumber, SFImage, SFRichText, NSDictionary, NSData, SFCard, SFUserReportRequest;

@interface SFSocialMediaPostCardSection : SFCardSection <SFSocialMediaPostCardSection, NSSecureCoding, NSCopying> {

	SCD_Struct_SF5 _has;
	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _nameNoWrap;
	int _separatorStyle;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	SFColor* _backgroundColor;
	NSString* _name;
	NSNumber* _nameMaxLines;
	NSString* _handle;
	SFImage* _verifiedGlyph;
	SFImage* _profilePicture;
	SFRichText* _post;
	SFImage* _picture;
	NSString* _timestamp;
	NSString* _footnote;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                           //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                     //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                       //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                     //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                  //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                     //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) SFColor * backgroundColor;                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL nameNoWrap;                                        //@synthesize nameNoWrap=_nameNoWrap - In the implementation block
@property (nonatomic,copy) NSNumber * nameMaxLines;                                  //@synthesize nameMaxLines=_nameMaxLines - In the implementation block
@property (nonatomic,copy) NSString * handle;                                        //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) SFImage * verifiedGlyph;                                //@synthesize verifiedGlyph=_verifiedGlyph - In the implementation block
@property (nonatomic,retain) SFImage * profilePicture;                               //@synthesize profilePicture=_profilePicture - In the implementation block
@property (nonatomic,retain) SFRichText * post;                                      //@synthesize post=_post - In the implementation block
@property (nonatomic,retain) SFImage * picture;                                      //@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSString * timestamp;                                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * footnote;                                      //@synthesize footnote=_footnote - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (assign,nonatomic) BOOL hideDivider; 
@property (nonatomic,retain) SFCard * nextCard; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSArray * parameterKeyPaths; 
@property (nonatomic,copy) NSString * cardSectionId; 
@property (nonatomic,copy) NSString * resultIdentifier; 
@property (nonatomic,retain) SFUserReportRequest * userReportRequest; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setHandle:(NSString *)arg1 ;
-(void)setSeparatorStyle:(int)arg1 ;
-(int)separatorStyle;
-(SFRichText *)post;
-(NSString *)handle;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(NSString *)punchoutPickerTitle;
-(NSString *)punchoutPickerDismissText;
-(BOOL)canBeHidden;
-(BOOL)hasTopPadding;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(BOOL)hasCanBeHidden;
-(BOOL)hasHasTopPadding;
-(BOOL)hasHasBottomPadding;
-(BOOL)hasSeparatorStyle;
-(void)setNameNoWrap:(BOOL)arg1 ;
-(void)setNameMaxLines:(NSNumber *)arg1 ;
-(void)setVerifiedGlyph:(SFImage *)arg1 ;
-(void)setProfilePicture:(SFImage *)arg1 ;
-(NSString *)timestamp;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPost:(SFRichText *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setBackgroundColor:(SFColor *)arg1 ;
-(SFColor *)backgroundColor;
-(void)setFootnote:(NSString *)arg1 ;
-(BOOL)nameNoWrap;
-(NSString *)name;
-(NSNumber *)nameMaxLines;
-(SFImage *)verifiedGlyph;
-(SFImage *)profilePicture;
-(SFImage *)picture;
-(BOOL)hasNameNoWrap;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)footnote;
-(void)setPicture:(SFImage *)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)punchoutOptions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(NSString *)arg1 ;
@end
