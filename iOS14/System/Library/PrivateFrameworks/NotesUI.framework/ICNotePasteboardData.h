/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, ICDataPersister;

@interface ICNotePasteboardData : NSObject <NSSecureCoding> {

	NSData* _attributedStringData;
	ICDataPersister* _dataPersister;

}

@property (nonatomic,readonly) NSData * attributedStringData;                //@synthesize attributedStringData=_attributedStringData - In the implementation block
@property (nonatomic,readonly) ICDataPersister * dataPersister;              //@synthesize dataPersister=_dataPersister - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)pasteboardDataFromPersistenceData:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(ICDataPersister *)dataPersister;
-(NSData *)attributedStringData;
-(id)initWithAttributedStringData:(id)arg1 dataPersister:(id)arg2 ;
-(id)persistenceData;
@end

