/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OISFUDataRepresentation.h>
#import <libobjc.A.dylib/SFUZipArchiveDataRepresentation.h>

@class NSData, NSString;

@interface OISFUZipArchiveMemoryDataRepresentation : OISFUDataRepresentation <SFUZipArchiveDataRepresentation> {

	NSData* mData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isReadable;
-(long long)dataLength;
-(id)initWithData:(id)arg1 ;
-(id)data;
-(id)inputStream;
-(void)dealloc;
-(id)bufferedInputStream;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1 ;
-(id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
@end

