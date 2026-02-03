#pragma once

#include <string>
#include <cstdint>

class BidRequest {
public:
    BidRequest(
        const std::string& bid_id,
        std::int64_t timestamp_ms,
        int advertiser_id,
        double market_price,
        double floor_price,
        bool has_click,
        bool has_conversion
    );

    const std::string& bidId() const;
    std::int64_t timestampMs() const;
    int advertiserId() const;
    double marketPrice() const;
    double floorPrice() const;
    bool hasClick() const;
    bool hasConversion() const;

private:
    std::string bid_id_;
    std::int64_t timestamp_ms_;
    int advertiser_id_;
    double market_price_;
    double floor_price_;
    bool has_click_;
    bool has_conversion_;
};
