/*
* Generated on Thursday, January 14, 2021 at 2:29:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/swift/libswiftCoreNFC.dylib
*/


@protocol NFCTagReaderSessionDelegate <NSObject>
@optional
-(void)tagReaderSessionDidBecomeActive:(id)arg1;
-(void)tagReaderSession:(id)arg1 didDetectTags:(id)arg2;

@required
-(void)tagReaderSession:(id)arg1 didInvalidateWithError:(id)arg2;

@end

