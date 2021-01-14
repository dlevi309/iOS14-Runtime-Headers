/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <Foundation/NSValueTransformer.h>
#import <libobjc.A.dylib/ENXMLSaxParserDelegate.h>

@class NSString, NSURL, ENXMLSaxParser, ENMLWriter, ENXMLDTD, ENWebArchive, ENNote, NSArray;

@interface ENWebContentTransformer : NSValueTransformer <ENXMLSaxParserDelegate> {

	BOOL _inTitleElement;
	NSString* _title;
	NSString* _mimeType;
	NSURL* _baseURL;
	ENXMLSaxParser* _htmlParser;
	ENMLWriter* _enmlWriter;
	ENXMLDTD* _enmlDTD;
	NSURL* _archiveBaseURL;
	ENWebArchive* _webArchive;
	ENNote* _note;
	NSArray* _ignorableTags;
	NSArray* _ignorableAttributes;
	NSArray* _skipTags;
	NSArray* _inlineElements;
	unsigned long long _ignoreElementCount;

}

@property (nonatomic,retain) ENXMLSaxParser * htmlParser;                        //@synthesize htmlParser=_htmlParser - In the implementation block
@property (nonatomic,retain) ENMLWriter * enmlWriter;                            //@synthesize enmlWriter=_enmlWriter - In the implementation block
@property (nonatomic,retain) ENXMLDTD * enmlDTD;                                 //@synthesize enmlDTD=_enmlDTD - In the implementation block
@property (nonatomic,retain) NSURL * archiveBaseURL;                             //@synthesize archiveBaseURL=_archiveBaseURL - In the implementation block
@property (nonatomic,retain) ENWebArchive * webArchive;                          //@synthesize webArchive=_webArchive - In the implementation block
@property (nonatomic,retain) ENNote * note;                                      //@synthesize note=_note - In the implementation block
@property (nonatomic,retain) NSArray * ignorableTags;                            //@synthesize ignorableTags=_ignorableTags - In the implementation block
@property (nonatomic,retain) NSArray * ignorableAttributes;                      //@synthesize ignorableAttributes=_ignorableAttributes - In the implementation block
@property (nonatomic,retain) NSArray * skipTags;                                 //@synthesize skipTags=_skipTags - In the implementation block
@property (nonatomic,retain) NSArray * inlineElements;                           //@synthesize inlineElements=_inlineElements - In the implementation block
@property (assign,nonatomic) unsigned long long ignoreElementCount;              //@synthesize ignoreElementCount=_ignoreElementCount - In the implementation block
@property (assign,nonatomic) BOOL inTitleElement;                                //@synthesize inTitleElement=_inTitleElement - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * mimeType;                                //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                    //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(NSString *)mimeType;
-(NSURL *)baseURL;
-(id)init;
-(void)setNote:(ENNote *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setMimeType:(NSString *)arg1 ;
-(ENNote *)note;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(id)transformedValue:(id)arg1 ;
-(ENWebArchive *)webArchive;
-(ENXMLDTD *)enmlDTD;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSString *)title;
-(ENXMLSaxParser *)htmlParser;
-(id)filenameFromURL:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 ;
-(void)parser:(id)arg1 didFailWithError:(id)arg2 ;
-(id)htmlFromWebArchive:(id)arg1 ;
-(id)archiveBaseURLFromURL:(id)arg1 ;
-(id)sanitizeURLAttribute:(id)arg1 ;
-(id)mimeTypeFromFilename:(id)arg1 ;
-(id)resourceFromWebResource:(id)arg1 ;
-(void)setHtmlParser:(ENXMLSaxParser *)arg1 ;
-(ENMLWriter *)enmlWriter;
-(void)setEnmlWriter:(ENMLWriter *)arg1 ;
-(void)setEnmlDTD:(ENXMLDTD *)arg1 ;
-(NSURL *)archiveBaseURL;
-(void)setArchiveBaseURL:(NSURL *)arg1 ;
-(void)setWebArchive:(ENWebArchive *)arg1 ;
-(NSArray *)ignorableTags;
-(void)setIgnorableTags:(NSArray *)arg1 ;
-(NSArray *)ignorableAttributes;
-(void)setIgnorableAttributes:(NSArray *)arg1 ;
-(NSArray *)skipTags;
-(void)setSkipTags:(NSArray *)arg1 ;
-(NSArray *)inlineElements;
-(void)setInlineElements:(NSArray *)arg1 ;
-(unsigned long long)ignoreElementCount;
-(void)setIgnoreElementCount:(unsigned long long)arg1 ;
-(BOOL)inTitleElement;
-(void)setInTitleElement:(BOOL)arg1 ;
@end
