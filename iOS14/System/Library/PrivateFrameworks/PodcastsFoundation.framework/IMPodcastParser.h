/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class IMPodcastFeed, NSDateFormatter, NSMutableString, NSString, NSError;

@interface IMPodcastParser : NSObject <NSXMLParserDelegate> {

	long long _feedType;
	IMPodcastFeed* _parsedFeed;
	NSDateFormatter* _rssDateFormatter;
	BOOL _shouldBufferElementChars;
	NSMutableString* _elementCharBuffer;
	unsigned long long _itemElementNestCount;
	BOOL _inAuthorElement;
	NSString* _feedDescriptionSourceElement;
	BOOL _preferredFeedCategoryFound;
	BOOL _preferredItemCategoryFound;
	NSError* _parseError;
	BOOL _inGlobalImageElement;

}

@property (nonatomic,retain) IMPodcastFeed * parsedFeed;                           //@synthesize parsedFeed=_parsedFeed - In the implementation block
@property (nonatomic,retain) NSDateFormatter * rssDateFormatter;                   //@synthesize rssDateFormatter=_rssDateFormatter - In the implementation block
@property (assign,nonatomic) BOOL shouldBufferElementChars;                        //@synthesize shouldBufferElementChars=_shouldBufferElementChars - In the implementation block
@property (nonatomic,retain) NSMutableString * elementCharBuffer;                  //@synthesize elementCharBuffer=_elementCharBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long itemElementNestCount;              //@synthesize itemElementNestCount=_itemElementNestCount - In the implementation block
@property (assign,nonatomic) BOOL inAuthorElement;                                 //@synthesize inAuthorElement=_inAuthorElement - In the implementation block
@property (assign,nonatomic) BOOL inGlobalImageElement;                            //@synthesize inGlobalImageElement=_inGlobalImageElement - In the implementation block
@property (nonatomic,retain) NSString * feedDescriptionSourceElement;              //@synthesize feedDescriptionSourceElement=_feedDescriptionSourceElement - In the implementation block
@property (assign,nonatomic) BOOL preferredFeedCategoryFound;                      //@synthesize preferredFeedCategoryFound=_preferredFeedCategoryFound - In the implementation block
@property (assign,nonatomic) BOOL preferredItemCategoryFound;                      //@synthesize preferredItemCategoryFound=_preferredItemCategoryFound - In the implementation block
@property (assign,nonatomic) long long feedType;                                   //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,retain) NSError * parseError;                                 //@synthesize parseError=_parseError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isITunesNamespace:(id)arg1 ;
+(BOOL)isContentNamespace:(id)arg1 ;
-(long long)feedType;
-(id)init;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)setFeedType:(long long)arg1 ;
-(id)parseWithData:(id)arg1 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)setParsedFeed:(IMPodcastFeed *)arg1 ;
-(IMPodcastFeed *)parsedFeed;
-(NSDateFormatter *)rssDateFormatter;
-(id)removeLastColonOfString:(id)arg1 ;
-(void)rssParser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)atomParser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)startBufferingElementChars;
-(unsigned long long)itemElementNestCount;
-(BOOL)preferredItemCategoryFound;
-(void)_parseEnclosureElement:(id)arg1 forFeedItem:(id)arg2 ;
-(void)setItemElementNestCount:(unsigned long long)arg1 ;
-(void)setPreferredItemCategoryFound:(BOOL)arg1 ;
-(BOOL)preferredFeedCategoryFound;
-(void)setInAuthorElement:(BOOL)arg1 ;
-(BOOL)inAuthorElement;
-(void)rssParser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)atomParser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(id)elementCharBufferTrimmed;
-(void)endBufferingElementChars;
-(NSMutableString *)elementCharBuffer;
-(id)dateFromRSSDateString:(id)arg1 ;
-(void)postProcessItemElement:(id)arg1 ;
-(NSString *)feedDescriptionSourceElement;
-(void)setFeedDescriptionSourceElement:(NSString *)arg1 ;
-(void)setPreferredFeedCategoryFound:(BOOL)arg1 ;
-(id)dateFromAtomDateString:(id)arg1 ;
-(BOOL)shouldBufferElementChars;
-(void)setParseError:(NSError *)arg1 ;
-(void)setShouldBufferElementChars:(BOOL)arg1 ;
-(void)setElementCharBuffer:(NSMutableString *)arg1 ;
-(void)parseStreamFromURL:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(NSError *)parseError;
-(void)setRssDateFormatter:(NSDateFormatter *)arg1 ;
-(BOOL)inGlobalImageElement;
-(void)setInGlobalImageElement:(BOOL)arg1 ;
@end
