class Phrase{
    public:
        Phrase(int in_head, int in_modifier);
        int GetHead()
        {
            return head;
        }
        int GetModifier()
        {
            return modifier;
        }
        int GetAspect()
        {
            return aspect;
        }
        int GetSentiment()
        {
            return sentiment;
        }
        double GetScore()
        {
            return score;
        }
        void SetAspect(int in_aspect)
        {
            aspect = in_aspect;
        }
        void SetSentiment(int in_sentiment)
        {
            sentiment = in_sentiment;
        }
        void SetScore(double in_score)
        {
            score = in_score;
        }

    private:
        int head;
        int modifier;
        int aspect;
        int sentiment;
        double score;
};

