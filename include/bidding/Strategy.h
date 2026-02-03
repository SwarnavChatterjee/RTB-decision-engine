#pragma once 
#include <cstdint>

class BidRequest;

class Strategy {
    public:
            explicit Strategy (double alpha);
            virtual ~Strategy () = default;

            double bid(
                const BidRequest& request,
                double remaining_budget,
                std::int64_t current_time
            ) const;

    protected:
            virtual double computeValue(const BidRequest& request) const = 0;

            double alpha_;        
};