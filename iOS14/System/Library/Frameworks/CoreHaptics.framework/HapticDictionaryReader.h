/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
*/


@interface HapticDictionaryReader : NSObject {

	unsigned long long _urlIndex;

}
-(id)parseEvent:(id)arg1 ;
-(id)parseParam:(id)arg1 ;
-(id)parseParamCurve:(id)arg1 ;
-(id)parseEventParams:(id)arg1 ;
-(id)parseParamCurveControlPoints:(id)arg1 ;
-(BOOL)verifyVersion:(id)arg1 ;
-(id)scanForEmbeddedURLs:(id)arg1 ;
-(BOOL)parseEventsAndParameters:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

