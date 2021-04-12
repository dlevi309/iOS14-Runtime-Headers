/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SampleAnalysis-Structs.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>
#import <libobjc.A.dylib/SALibraryCache.h>

@class NSUUID, NSArray, NSString;

@interface SAKernelCache : NSObject <SAJSONSerialization, SALibraryCache> {

	NSUUID* _uuid;
	NSArray* _binaryLoadInfos;
	unsigned long long _loadAddress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain) NSArray * binaryLoadInfos;                                  //@synthesize binaryLoadInfos=_binaryLoadInfos - In the implementation block
@property (readonly) unsigned long long loadAddress;                           //@synthesize loadAddress=_loadAddress - In the implementation block
@property (readonly) NSUUID * uuid;                                            //@synthesize uuid=_uuid - In the implementation block
@property (readonly) unsigned long long startAddress; 
@property (readonly) unsigned long long endAddress; 
@property (readonly) unsigned long long textSegmentsStartAddress; 
@property (readonly) unsigned long long textSegmentsEndAddress; 
+(void)clearCaches;
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromSerializedBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 ;
+(id)kernelCacheWithUUID:(id)arg1 loadAddress:(unsigned long long)arg2 ;
-(NSUUID *)uuid;
-(NSString *)debugDescription;
-(unsigned long long)startAddress;
-(unsigned long long)endAddress;
-(unsigned long long)loadAddress;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(BOOL)addSelfToBuffer:(SCD_Struct_SA9*)arg1 bufferLength:(unsigned long long)arg2 withCompletedSerializationDictionary:(id)arg3 ;
-(void)populateReferencesUsingBuffer:(const void*)arg1 bufferLength:(unsigned long long)arg2 andDeserializationDictionary:(id)arg3 andDataBufferDictionary:(id)arg4 ;
-(NSArray *)binaryLoadInfos;
-(BOOL)matchesUUID:(unsigned char)arg1 loadAddress:(unsigned long long)arg2 ;
-(void)setBinaryLoadInfos:(NSArray *)arg1 ;
-(unsigned long long)textSegmentsStartAddress;
-(unsigned long long)textSegmentsEndAddress;
@end
