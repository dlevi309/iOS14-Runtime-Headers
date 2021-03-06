/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@class NSDate, NSArray, NSData, NSString;

@interface NEDNSPacket : NSObject {

	BOOL _isAuthoritativeAnswer;
	BOOL _isTruncated;
	BOOL _isRecursionDesired;
	BOOL _isRecursionAvailable;
	unsigned short _flags;
	long long _identifier;
	NSDate* _timestamp;
	long long _messageType;
	long long _opCode;
	long long _responseCode;
	NSArray* _queries;
	NSArray* _answers;
	NSArray* _authorities;
	NSArray* _additionalRecords;
	NSData* _data;
	unsigned long long _endOfQueriesOffset;

}

@property (readonly) NSData * data;                                      //@synthesize data=_data - In the implementation block
@property (readonly) unsigned short flags;                               //@synthesize flags=_flags - In the implementation block
@property (readonly) unsigned long long endOfQueriesOffset;              //@synthesize endOfQueriesOffset=_endOfQueriesOffset - In the implementation block
@property (readonly) long long identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSDate * timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) long long messageType;                              //@synthesize messageType=_messageType - In the implementation block
@property (readonly) long long opCode;                                   //@synthesize opCode=_opCode - In the implementation block
@property (readonly) BOOL isAuthoritativeAnswer;                         //@synthesize isAuthoritativeAnswer=_isAuthoritativeAnswer - In the implementation block
@property (readonly) BOOL isTruncated;                                   //@synthesize isTruncated=_isTruncated - In the implementation block
@property (readonly) BOOL isRecursionDesired;                            //@synthesize isRecursionDesired=_isRecursionDesired - In the implementation block
@property (readonly) BOOL isRecursionAvailable;                          //@synthesize isRecursionAvailable=_isRecursionAvailable - In the implementation block
@property (readonly) long long responseCode;                             //@synthesize responseCode=_responseCode - In the implementation block
@property (readonly) NSString * responseCodeString; 
@property (readonly) NSArray * queries;                                  //@synthesize queries=_queries - In the implementation block
@property (readonly) NSArray * answers;                                  //@synthesize answers=_answers - In the implementation block
@property (readonly) NSArray * authorities;                              //@synthesize authorities=_authorities - In the implementation block
@property (readonly) NSArray * additionalRecords;                        //@synthesize additionalRecords=_additionalRecords - In the implementation block
-(long long)messageType;
-(BOOL)isTruncated;
-(long long)opCode;
-(NSDate *)timestamp;
-(NSArray *)answers;
-(unsigned short)flags;
-(id)createResponse;
-(NSData *)data;
-(id)initFromData:(id)arg1 ;
-(NSString *)responseCodeString;
-(BOOL)isAuthoritativeAnswer;
-(BOOL)isRecursionDesired;
-(BOOL)isRecursionAvailable;
-(NSArray *)authorities;
-(NSArray *)additionalRecords;
-(unsigned long long)endOfQueriesOffset;
-(NSArray *)queries;
-(long long)identifier;
-(long long)responseCode;
@end

