/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextElement.h>

@class NSAttributedString, NSTextRange, NSTextDataProvider, NSMutableArray, NSDictionary;

@interface NSTextParagraph : NSTextElement {

	NSAttributedString* _attributedString;
	NSRange _range;
	NSTextRange* _paragraphContentRange;
	NSTextRange* _paragraphSeparatorRange;
	long long _resolvedBaseDirection;
	long long _fallbackBaseDirection;
	NSTextDataProvider* _textDataProvider;
	NSMutableArray* _textLayoutFragments;
	NSDictionary* _attributes;

}

@property (copy) NSDictionary * attributes;                                   //@synthesize attributes=_attributes - In the implementation block
@property (copy,readonly) NSAttributedString * attributedString; 
@property (readonly) NSTextRange * paragraphContentRange; 
@property (readonly) NSTextRange * paragraphSeparatorRange; 
+(id)textParagraphsForAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(id)paragraphRange;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(id)init;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(NSAttributedString *)attributedString;
-(NSDictionary *)attributes;
-(id)initWithAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(id)description;
-(id)initWithAttributedString:(id)arg1 ;
-(NSTextRange *)paragraphContentRange;
-(CGSize)estimatedIntrinsicContentSizeForTextLayoutManager:(id)arg1 ;
-(NSTextRange *)paragraphSeparatorRange;
-(long long)_resolvedBaseWritingDirectionWithFallbackDirection:(long long)arg1 ;
-(id)initWithTextContentManager:(id)arg1 ;
-(void)setTextDataProvider:(id)arg1 ;
-(void)setParagraphContentRange:(NSTextRange *)arg1 ;
-(void)setParagraphSeparatorRange:(NSTextRange *)arg1 ;
-(void)synchronizeDocumentRange;
-(id)textDataProvider;
-(void)dealloc;
@end
