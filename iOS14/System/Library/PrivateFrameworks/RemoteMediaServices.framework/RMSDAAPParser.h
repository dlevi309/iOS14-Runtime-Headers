/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
@interface RMSDAAPParser : NSObject
+(id)sharedInstance;
+(id)objectWithData:(id)arg1 error:(id*)arg2 ;
+(id)typeForDRCPValueType:(int)arg1 ;
+(id)objectWithData:(id)arg1 ;
-(void)setUInt16:(const char*)arg1 size:(unsigned)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(void)setUInt32:(const char*)arg1 size:(unsigned)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(void)setString:(const char*)arg1 size:(unsigned)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(void)setUInt8:(const char*)arg1 size:(unsigned)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(void)setUInt64:(const char*)arg1 size:(unsigned)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(id)parseUTF8String:(const char*)arg1 length:(unsigned)arg2 ;
-(void)setBool:(const char*)arg1 size:(unsigned)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(void)setDate:(const char*)arg1 size:(unsigned)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(void)setFloat32:(const char*)arg1 size:(unsigned)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(void)setSInt8:(const char*)arg1 size:(unsigned)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(void)setSInt16:(const char*)arg1 size:(unsigned)arg2 inDict:(id)arg3 forKey:(id)arg4 ;
-(id)processResponseCode:(unsigned)arg1 bytes:(const char*)arg2 length:(unsigned)arg3 ;
-(void)unknownChunk:(RSDAAPChunk)arg1 ;
-(void)enumerateDAAPChunksInBytes:(const char*)arg1 length:(unsigned)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)parseMACAddressListing:(const char*)arg1 length:(unsigned)arg2 ;
-(id)parseContentCollectionDict:(const char*)arg1 length:(unsigned)arg2 ;
-(id)parseListingItem:(const char*)arg1 length:(unsigned)arg2 ;
-(id)parseXMLContent:(const char*)arg1 length:(unsigned)arg2 ;
-(id)parseUnicodeCharacter:(const char*)arg1 length:(unsigned)arg2 ;
-(id)parseListingCollection:(const char*)arg1 length:(unsigned)arg2 capacity:(int)arg3 sectionHeaders:(id*)arg4 ;
-(id)parseQueueSectionItems:(const char*)arg1 length:(unsigned)arg2 ;
-(id)parseDACPPropertyResponse:(const char*)arg1 length:(unsigned)arg2 ;
-(id)parseBrowseResults:(const char*)arg1 length:(unsigned)arg2 ;
-(id)parseControlPromptCollection:(const char*)arg1 length:(unsigned)arg2 ;
-(id)parseServerInfo:(const char*)arg1 length:(unsigned)arg2 ;
-(id)parseContentCodes:(const char*)arg1 length:(unsigned)arg2 ;
-(id)parseLogin:(const char*)arg1 length:(unsigned)arg2 ;
-(id)parseListingHeader:(const char*)arg1 length:(unsigned)arg2 ;
-(id)parseControlPromptResponse:(const char*)arg1 length:(unsigned)arg2 ;
-(id)parseGetSpeakersResponse:(const char*)arg1 length:(unsigned)arg2 ;
@end

