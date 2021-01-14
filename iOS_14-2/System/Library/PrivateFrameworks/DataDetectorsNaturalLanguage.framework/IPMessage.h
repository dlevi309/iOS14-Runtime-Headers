/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
*/


@class NSMutableArray, NSMutableDictionary, NSString, IPPerson, NSArray, NSDate;

@interface IPMessage : NSObject {

	NSMutableArray* _messageUnits;
	NSMutableDictionary* _keywordsDictionary;
	NSString* _lowercaseSubject;
	BOOL _isReply;
	BOOL _isSent;
	BOOL _isGroupConversation;
	BOOL _isSenderSignificant;
	NSString* _identifier;
	NSString* _threadIdentifier;
	NSString* _subject;
	IPPerson* _sender;
	NSArray* _recipients;
	NSDate* _dateSent;
	NSString* _type;
	NSString* _htmlContent;
	unsigned long long _messageUnitsTextLength;

}

@property (retain) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * threadIdentifier;                              //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (retain) NSString * subject;                                       //@synthesize subject=_subject - In the implementation block
@property (retain) IPPerson * sender;                                        //@synthesize sender=_sender - In the implementation block
@property (retain) NSArray * recipients;                                     //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSDate * dateSent;                                        //@synthesize dateSent=_dateSent - In the implementation block
@property (retain) NSString * type;                                          //@synthesize type=_type - In the implementation block
@property (retain) NSString * htmlContent;                                   //@synthesize htmlContent=_htmlContent - In the implementation block
@property (readonly) unsigned long long messageUnitsTextLength;              //@synthesize messageUnitsTextLength=_messageUnitsTextLength - In the implementation block
@property (readonly) NSString * lowercaseSubject; 
@property (assign) BOOL isReply;                                             //@synthesize isReply=_isReply - In the implementation block
@property (nonatomic,retain) NSArray * messageUnits; 
@property (assign) BOOL isSent;                                              //@synthesize isSent=_isSent - In the implementation block
@property (assign) BOOL isGroupConversation;                                 //@synthesize isGroupConversation=_isGroupConversation - In the implementation block
@property (assign) BOOL isSenderSignificant;                                 //@synthesize isSenderSignificant=_isSenderSignificant - In the implementation block
-(NSArray *)recipients;
-(NSString *)threadIdentifier;
-(NSString *)subject;
-(IPPerson *)sender;
-(void)setThreadIdentifier:(NSString *)arg1 ;
-(void)setSender:(IPPerson *)arg1 ;
-(id)init;
-(void)setRecipients:(NSArray *)arg1 ;
-(NSDate *)dateSent;
-(void)setDateSent:(NSDate *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(BOOL)isSent;
-(NSString *)htmlContent;
-(BOOL)isGroupConversation;
-(NSString *)type;
-(void)setIsSent:(BOOL)arg1 ;
-(void)setIsGroupConversation:(BOOL)arg1 ;
-(BOOL)isSenderSignificant;
-(void)setIsSenderSignificant:(BOOL)arg1 ;
-(NSArray *)messageUnits;
-(void)setMessageUnits:(NSArray *)arg1 ;
-(id)initWithIdentifier:(id)arg1 subject:(id)arg2 sender:(id)arg3 recipients:(id)arg4 dateSent:(id)arg5 type:(id)arg6 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setSubject:(NSString *)arg1 ;
-(BOOL)isReply;
-(void)setIsReply:(BOOL)arg1 ;
-(id)initWithDateSent:(id)arg1 subject:(id)arg2 ;
-(NSString *)lowercaseSubject;
-(unsigned long long)messageUnitsTextLength;
-(id)firstHeaderValueForKey:(id)arg1 inHeaders:(id)arg2 ;
-(void)setHtmlContent:(NSString *)arg1 ;
-(void)addMessageUnit:(id)arg1 ;
-(id)initWithDateSent:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 subject:(id)arg2 sender:(id)arg3 recipients:(id)arg4 dateSent:(id)arg5 ;
-(id)initWithHTMLContent:(id)arg1 emailHeadersDictionary:(id)arg2 dateSent:(id)arg3 ;
-(void)addDetectedKeyword:(id)arg1 classificationTypeIdentifier:(id)arg2 ;
-(id)detectedKeywordsDictionary;
@end
