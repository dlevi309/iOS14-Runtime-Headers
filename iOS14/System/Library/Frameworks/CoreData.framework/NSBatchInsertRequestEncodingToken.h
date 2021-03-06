/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSInputStream;

@interface NSBatchInsertRequestEncodingToken : NSObject <NSSecureCoding> {

	NSString* _entityName;
	NSArray* _objectsToInsert;
	NSInputStream* _inputStream;
	unsigned long long _resultType;
	BOOL _secure;

}

@property (nonatomic,retain,readonly) NSString * entityName;                    //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,retain,readonly) NSArray * objectsToInsert;                //@synthesize objectsToInsert=_objectsToInsert - In the implementation block
@property (nonatomic,retain,readonly) NSInputStream * inputStream;              //@synthesize inputStream=_inputStream - In the implementation block
@property (nonatomic,readonly) unsigned long long resultType;                   //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) BOOL secure;                                     //@synthesize secure=_secure - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)secure;
-(NSString *)entityName;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)resultType;
-(NSArray *)objectsToInsert;
-(NSInputStream *)inputStream;
-(id)initWithCoder:(id)arg1 ;
-(id)initForRequest:(id)arg1 ;
-(void)dealloc;
@end

