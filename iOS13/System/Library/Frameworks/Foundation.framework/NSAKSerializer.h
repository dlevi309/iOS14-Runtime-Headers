/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@interface NSAKSerializer : NSObject {

	id ss;

}
-(void)dealloc;
-(unsigned long long)serializeData:(id)arg1 ;
-(unsigned long long)serializeList:(id)arg1 ;
-(unsigned long long)serializePropertyList:(id)arg1 ;
-(unsigned long long)serializeString:(id)arg1 ;
-(unsigned long long)serializeListItemIn:(id)arg1 at:(unsigned long long)arg2 ;
-(unsigned long long)serializeObject:(id)arg1 ;
-(unsigned long long)serializePListKeyIn:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(unsigned long long)serializePListValueIn:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)initForSerializerStream:(id)arg1 ;
-(id)serializerStream;
@end
