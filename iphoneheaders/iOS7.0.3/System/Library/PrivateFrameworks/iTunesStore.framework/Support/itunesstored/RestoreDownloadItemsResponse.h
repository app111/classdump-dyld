/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:13 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSArray, StoreDownloadQueueResponse;

@interface RestoreDownloadItemsResponse : NSObject {

	NSArray* _requestItems;
	StoreDownloadQueueResponse* _serverResponse;

}

@property (nonatomic,copy) NSArray * requestItems;                                     //@synthesize requestItems=_requestItems - In the implementation block
@property (nonatomic,retain) StoreDownloadQueueResponse * serverResponse;              //@synthesize serverResponse=_serverResponse - In the implementation block
-(void)setRequestItems:(id)arg1 ;
-(void)setServerResponseWithError:(id)arg1 ;
-(id)serverResponse;
-(id)requestItems;
-(void)setServerResponse:(id)arg1 ;
-(void)dealloc;
@end
