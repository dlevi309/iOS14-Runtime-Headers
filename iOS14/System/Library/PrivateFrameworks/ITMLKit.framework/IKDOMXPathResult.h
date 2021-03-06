/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMXPathResult.h>

@class NSString, IKDOMNode, NSArray;

@interface IKDOMXPathResult : IKJSObject <IKJSDOMXPathResult> {

	long long _type;
	NSArray* _nodes;

}

@property (assign) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * nodes;                                     //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) long long resultType; 
@property (nonatomic,readonly) long long numberValue; 
@property (nonatomic,__weak,readonly) NSString * stringValue; 
@property (nonatomic,readonly) BOOL booleanValue; 
@property (nonatomic,__weak,readonly) IKDOMNode * singleNodeValue; 
@property (nonatomic,readonly) BOOL invalidIteratorState; 
@property (nonatomic,readonly) long long snapshotLength; 
-(long long)numberValue;
-(void)setNodes:(NSArray *)arg1 ;
-(long long)resultType;
-(void)setType:(long long)arg1 ;
-(NSString *)stringValue;
-(long long)type;
-(BOOL)booleanValue;
-(NSArray *)nodes;
-(IKDOMNode *)singleNodeValue;
-(BOOL)invalidIteratorState;
-(long long)snapshotLength;
-(id)iterateNext;
-(id)snapshotItem:(long long)arg1 ;
-(id)initWithAppContext:(id)arg1 type:(long long)arg2 nodes:(id)arg3 ;
@end

