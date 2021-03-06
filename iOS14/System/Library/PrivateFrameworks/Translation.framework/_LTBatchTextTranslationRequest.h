/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/

#import <Translation/_LTTranslationRequest.h>

@class NSArray;

@interface _LTBatchTextTranslationRequest : _LTTranslationRequest {

	NSArray* _paragraphs;
	/*^block*/id _textHandler;
	/*^block*/id _translationHandler;

}

@property (nonatomic,copy) NSArray * paragraphs;               //@synthesize paragraphs=_paragraphs - In the implementation block
@property (nonatomic,copy) id textHandler;                     //@synthesize textHandler=_textHandler - In the implementation block
@property (nonatomic,copy) id translationHandler;              //@synthesize translationHandler=_translationHandler - In the implementation block
-(void)_startTranslationWithService:(id)arg1 done:(/*^block*/id)arg2 ;
-(id)loggingType;
-(void)_translationFailedWithError:(id)arg1 ;
-(id)textHandler;
-(void)setTextHandler:(id)arg1 ;
-(id)translationHandler;
-(void)setTranslationHandler:(id)arg1 ;
-(void)setParagraphs:(NSArray *)arg1 ;
-(NSArray *)paragraphs;
@end

